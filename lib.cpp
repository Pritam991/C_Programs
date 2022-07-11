#include<iostream>
using namespace std;
class lib
{
    public:
    string name;
    string author;
    int pub_yr;
    float cost;
    void display(string name,string author,int pub_yr,float cost)
    {
        cout<<"BOOK NAME : "<<name<<endl;
        cout<<"AUTHOR'S NAME : "<<author<<endl;
        cout<<"PUBLICATION YEAR : "<<pub_yr<<endl;
        cout<<"PRICE : "<<cost<<endl<<"\n\n";
    }
};
int main()
{ 
    lib obj1,obj2,obj3;

    cout<<"Enter the name of 1st book :\n";
    cin>>obj1.name;
    cout<<"Enter the name of the author of 1st book :\n";
    cin>>obj1.author;
    cout<<"Enter the publication year of 1st book :\n";
    cin>>obj1.pub_yr;
    cout<<"Enter the price of 1st book :\n";
    cin>>obj1.cost;

    cout<<"Enter the name of 2nd book :\n";
    cin>>obj2.name;
    cout<<"Enter the name of the author of 2nd book :\n";
    cin>>obj2.author;
    cout<<"Enter the publication year of 2nd book :\n";
    cin>>obj2.pub_yr;
    cout<<"Enter the price of 2nd book :\n";
    cin>>obj2.cost;

    cout<<"Enter the name of 3rd book :\n";
    cin>>obj3.name;
    cout<<"Enter the name of the author of 3rd book :\n";
    cin>>obj3.author;
    cout<<"Enter the publication year of 3rd book :\n";
    cin>>obj3.pub_yr;
    cout<<"Enter the price of 3rd book :\n";
    cin>>obj3.cost;

    obj1.display(obj1.name,obj1.author,obj1.pub_yr,obj1.cost);
    obj2.display(obj2.name,obj2.author,obj2.pub_yr,obj2.cost);
    obj3.display(obj3.name,obj3.author,obj3.pub_yr,obj3.cost);

    return 0;

}