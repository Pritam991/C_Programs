#include<stdio.h>
void main()
{
    int a[5][5], i, j;
    long determinant;
    printf("\nEnter the Matrix elements :");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
  
    printf("\nThe Matrix is :\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            
            printf("%d\t",a[i][j]);
            
            
        }
        printf("\n");
        
    }
    determinant=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*((a[1][1]*a[2][2])-(a[2][0]*a[1][2]))+a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
    
    printf("\nDeterminant of Matrix is : %ld",determinant);
    
}