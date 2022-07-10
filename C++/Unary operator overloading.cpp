/*Program to demonstrate the unary operator overloading for operator ++.
Make a class test. Create a default constructor to initialize the variable.
1) Overload operator ++ (Pre) with definition to pre-decrement the value of a variable 
2) Overload operator ++ (post) with definition to post-decrement the value of variable.*/

#include <iostream>
using namespace std;
class Test 
{
    private:
    int num;
    public:
    Test() 
    {           // default constructor to initlize the variable
        num = 0;
    }
    
    Test(int n) 
    {       // parameterized constructor to return object after incrementing
        num = n;
    }
    
    void display()      // method to display time
    {
        cout<< "Number: " <<num<<endl;
    }
    
    Test operator++ ()          // overloaded prefix ++ operator
    {
        ++num;                // increment this object
        return Test(num);    // return object with increment value
    }
    
    Test operator++( int ) // overloaded postfix ++ operator
    {
        Test t(num);     // save the orignal value
        ++num;// increment current object
        return t;// return old original value
    }
};

int main() 
{
    Test T1(10), T2(10), T3;
    ++T1;           // increment T1
    T1.display();   // display T1
    T2++;           // increment T2
    T2.display();   // display T2
    T3.display();   // display T3
    T3 = T2++;      // increment T2 again and assign pre-incremented value to T3
    T2.display();   // display T2
    T3.display();   // display T3
    cout<<"\n*******************************BY  HEENUREET**************************\n";    
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0;
}



