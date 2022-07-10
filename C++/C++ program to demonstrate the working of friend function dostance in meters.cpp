/* C++ program to demonstrate the working of friend function.*/
#include <iostream>
using namespace std; 
class demo 
{
    private:
        int meter; 
    public:
        demo()
        {
            meter=0;
        }
        //SYNTAX
        //friend returnType functionName(arguments);
        friend int fn(demo);       //friend function declaration
};

int fn(demo ob)        //friend function definition
{
    ob.meter=10; //accessing private data from non-member function
    return ob.meter; 
}

int main()
{ 
    demo ob;
    cout<<"Distance:"<<fn(ob);
    return 0;
}