#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,a[10],ub,lb,mid,key,f=0;
    printf("Enter the Size of Array :");
    scanf("%d",&n);
    printf("Enter the Elements of Array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter ther Element to be Searched:");
    scanf("%d",&key);
    lb=0;
    ub=n-1;
    while (lb<=ub && f==0)
    {
        mid=(lb+ub)/2;
        if (a[mid]==key)
        {
            f=1;
            printf("Element is Found at : %d position",mid+1);
        }
    else
       {
        if (a[mid]>key)
        ub=mid-1;
        else
        lb=mid+1;
        }
    }
    if(f==0)
    printf("Not Found");
    getch();
    

}