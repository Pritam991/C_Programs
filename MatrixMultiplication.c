#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	printf("Enter first matrix elements :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix elements :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("After Multiply two matrix :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum=0;
			for(k=0;k<=2;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
    }
     return 0;		
}


	