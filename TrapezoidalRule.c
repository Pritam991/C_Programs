#include<stdio.h>
float fun(float x)
{
    return x*x*x;
}
void main()
{
    int n;
    float i,ub,lb,sum=0,h;
    //input
    printf("\nEnter the Value of upper bound and lower bound: ");
    scanf("%f%f",&ub,&lb);
    printf("\nEnter no of Intervals: ");
    scanf("%d",&n);

    //--------------- Operations -------------
    h=(ub-lb)/n;
    sum=fun(ub)+ fun(lb);
    for ( i = ub+h; i < lb; i=i+h)
    {
        sum=sum+2*fun(i);
    }
    sum=(h*sum)/2;
    //print the output
    printf("\nValue of the integral = %f",sum);
    
}