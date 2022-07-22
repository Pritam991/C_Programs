#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i,key;
	int lb ,ub,mid;
	int f=0;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search elements:");
	scanf("%d",&key);
	lb=0;
	ub=n-1;

		while(lb<ub&&f==0)
		{
			mid=(lb+ub)/2;
			if(a[mid]==key)
			{
				f==1;
				printf("elements is found at %d position",(mid+1));
			}
			else
			{
				if(a[mid]>key)
				
				
				ub=mid-1;
		     	
				else
				
				
				lb=mid+1;
			   
			}
		}
		return 0;

	
}