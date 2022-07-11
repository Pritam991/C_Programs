#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,key,f=0;
    
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the searching elements:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            f=1;
            printf("searching element %d found at position %d  ",key,i+1);
            break;
        }
    }

    if(f==0)
    {
        printf("search elements is not found: ");
    }
    getch();
}