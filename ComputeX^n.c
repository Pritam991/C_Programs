#include <stdio.h>
void main()
{
 long int x,n,power=1,i=1;
 printf("Enter the values of X and n : \n");
 scanf("%d %d",&x,&n);
 power=x;
 while(n!=i)
 {
  power=power*x;
  i++;
 }
 printf("%d to the power of %d = %d",x,n,power);
}