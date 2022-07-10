// Write a program to show concept of static data members and static member functions 

#include<iostream>
using namespace std;
class demo
{
    static int number;        //static data member 
    public: 
    int n;
    void set()
    {
        number=number+1;
        n=number;
    }    
    void show()
    {
        cout<<"n="<<n<<endl;
    }    
    static void show_count() //static member function
    {
        cout<<"number="<<number<<endl; 
    }
};
/*If you are calling a static data member within a member function, 
member function should be declared as static 
(i.e. a static member function can access the static datamembers)*/

int demo::number;  
// by default number gets 0 since no value initialised
    
int main()
{
    demo ob1,ob2,ob3; 
    ob1.set(); 
    ob1.show(); 
    ob2.set(); 
    ob2.show(); 
    ob3.set(); 
    ob3.show();
    demo::show_count();
	cout<<"\n*******************************BY  HEENUREET**************************\n";  
    cout<<"********************************UID 21BCS1055*******************************"; 
	return 0; 
} 


 

 