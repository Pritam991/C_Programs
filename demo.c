#include<stdio.h>
int x(int,int);
void main()
{
    int a,b,c;
    a=10;
    b=20;
    c=x(a,b);
    printf("Sum=%d",c);
}
/*int x(int a,int b)
{
    int d;
    d=a+b;
    return d;*/

int x(int a, int b)
{
    int d;
    d=b*b*b+a;
    return d;
}