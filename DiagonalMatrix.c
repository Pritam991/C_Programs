#include<stdio.h>
void main()
{
	int a[3][3],i,j,k,l;
	printf("Enter the  matrix elements :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		  printf("Enter the a[%d][%d] element: ",i,j);	
	      scanf("%d",&a[i][j]);
	      printf("\n");
		}
	}
	printf("The matrix we have :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
	      printf("%d",a[i][j]);
	      
		}
		printf("\n");
	}
	printf("The Diagonal Matrix is :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			printf("%d",a[i][j]);
			else
			printf("_");
		}
		printf("\n");
	}
	
	
	
}