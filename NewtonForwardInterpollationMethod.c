#include<stdio.h>
int main(){
    int i,j,n;
    float x[25],y[25][25];
    printf("Enter the no. of Interpolating Point :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the  Value x[%d]:",i);
        scanf("%f",&x[i]);
    }
    for ( i = 0; j < n; j++)
    {
      printf("Enter Corresponding value of y[0][%d]:",j);
      scanf("%f",&y[0][j]);    
    }
    for ( i = 1; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            y[i][j]=y[i-1][j+1]-y[i-1][j];
        }
        
    }
    printf("Forward Differences are :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%f\t",x[i]);
        {
            for ( j = 0; j < n-i; j++)
            {
                printf("%f\t",y[j][i]);
            }
            
        }
        printf("\n");
    }
    return 0;
    
}