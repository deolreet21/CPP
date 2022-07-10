#include<iostream>
using namespace std;
class area
{
    int a,l,b;
    
    public:
    area() // Default Constructor
    {
        l=5;
        b=6;
        cout<<"Default constructor called\n";
        cout<<"length="<<l<<"\nbreadth="<<b<<endl;
    }
    
    area(int x) // parameterised constructor
    {
        int y=10;
        l=x;
        b=y;
        cout<<"Single arg constructor called\n";
        cout<<"length="<<l<<"\nbreadth="<<b<<endl;
    }
    
    area(int x, int y) // parameterised constructor
    {
        l=x;
        b=y;
        cout<<"Double arg constructor called\n";
        cout<<"length="<<l<<"\nbreadth="<<b<<endl;
    }
    
    void calc()
    {
        a=l*b; 
    }
    void print()
    {
        cout<<"Area is : "<<a<<endl;
    }
    ~area()
    {
        for(static int i=1;i<=3;i++)
        cout<<"Destructor successfully called for object"<<i<<endl;
    }
};

int main()
{
    int l,l2,b2;
    area ob1;  
    ob1.calc();
    ob1.print();
    
    cout<<"Breadth b2 set to 10 enter lentgh";
    cin>>l;
    area ob2(l); // parameterised constructor is called.
    ob2.calc();
    ob2.print();
    
    cout<<"Enter length";
    cin>>l2;
    cout<<"Enter breadth";
    cin>>b2;
    area ob3(l2,b2); // parameterised constructor is called.
    ob3.calc();
    ob3.print();
    return (0);
}