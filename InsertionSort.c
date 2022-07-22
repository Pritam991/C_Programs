#include<stdio.h>

int main()
{
    int n , array[50], i,j,temp;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(i=1;i<n;i++)
    {
        temp=array[i];
        j=i-1;
        while(temp<array[j] && j>=0)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=temp;
    }
    printf("Sorted elements are:\n");
    for(i=0;i<n;i++);
    printf("\t %d",array[i]);
    return 0;

}