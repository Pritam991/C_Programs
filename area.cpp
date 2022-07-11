#include<iostream>
using namespace std;
class geometry
{
    public:
    void area(double r)
    {
        double area=3.14*r*r;
        cout<<"Area of circle :"<<area<<endl;
    }
     void area(double a ,double b)
    {
        double area=a*b;
        cout<<"Area of rectangle :"<<area<<endl;
    }
     void area()
    {
        double a;
        cout<<"Enter the side of square :";
        cin>>a;
        double area=a*a;
        cout<<"Area of square :"<<area;
    }
};
int main()
{
    geometry cir,rect,sq;
    double m,n,p,q;
    cout<<"Enter the radius of circle :";
    cin>>m;
    cir.area(m);
    
    cout<<"Enter the two sides of rectangle :";
    cin>>n>>p;
    rect.area(n,p);
    
    sq.area();
}