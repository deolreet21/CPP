Answer 3.
#include<iostream>
using namespace std;
class demo 
{
    public:
    float p,q;
    inline float multiply(float a, float b)// function to multiply two numbers
    {
        p=a*b;
    }
    inline float divide(float a, float b)// function to divide two numbers
    {
        q=a/b;
    }
    void result()
    {
        cout<<"Multiplication = "<<p<<endl;// multiplication of two number
        cout<<"Division = "<<q<<endl;     // division of two number
    }
};

int main()
{
    float x, y;// declare variables
    demo ob;// declare object of demo class
    cout<<"Enter two Numbers :: ";// take input from end-user
    cin>>x>>y;
    ob.multiply(x,y);
    ob.divide(x,y);
    ob.result();
    cout<<"\nBy HeenuReet 21BCS1055";
    return 0;
}