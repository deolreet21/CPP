/*WAP to create a class demo to represent complex numbers.The demo class should use a
function to add two complex numbers which are passed as arguments. The function should
return an object of type complex representing the sum of two complex numbers.*/

#include<iostream>
using namespace std;
class demo
{
    int img,real;
    public:
    void get()
    {
        cout<<"Enter a and b where a + ib ";
        cout<<"\na = ";
        cin>>real;
        cout<<"b = ";
        cin>>img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
    demo sum(demo ob1, demo ob2)
    {
        demo ob3;
        ob3.real=ob1.real+ob2.real;
        ob3.img=ob1.img+ob2.img;
        return (ob3);
    }
};

int main()
{
    demo ob1, ob2, ob3, ob4;
    cout<<"Enter 1st complex no.: \n";
    ob1.get();
    cout<<"\nEnter 2nd complex no.: \n";
    ob2.get();
    cout<<"\nThe 1st complex no. is :: ";
    ob1.display();
    cout<<"\n The 2nd complex no. is :: ";
    ob2.display();
    ob4=ob3.sum(ob1,ob2);
    cout<<"\nThe Sum of two complex no.s is: ";
    ob4.display(); 
    cout<<"\n*******************************BY  HEENUREET**************************\n";  
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0;
}