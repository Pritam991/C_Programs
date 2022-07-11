#include<stdio.h>
void main()
{
    int a[100];
    int c[100];
    int i,z,k,j,n,mid,r,m;
    printf("number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(z=0;z<5;z++)
    {
        scanf("%d",&a[z]);

    }
    r=n-1;
    i=0;
    mid=n/2;
    j=(n/2)+1;//doubtful
    k=1;
    while((i<=mid)&&(j<=r))
    {
        if(a[i]<=a[j])
        {
         c[k]=a[i];
         i=i+1; k=k+1;
        }
        else{
            c[k]=a[j];
            j=j+1; k=k=1;
        }

    }
    if((i>mid)&& (j<=r))
    {
        for(m=j;((m>=j)&& (m<=r));m++)
       {
         c[k]=a[m];
         k=k+1;
       }
       
    }
    else{
        if((i<mid)&&(j>r))
        {
            for(m=i;((m>=i)&& (m<=mid));m++)
            {
              c[k]=a[m];
               k=k+1;
            }
        }

    }
    for(m=1;((m>=1)&& (m<=(k-1)));m++)
    {
        c[m]=a[m];
            
    }

    printf("%d",c);
    



}
