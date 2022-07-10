//Write a program to show concept of static data members and static member functions
#include <iostream>
using namespace std;
class Second;
class First
{
	int x;
	public:
	void fun1 (int a)  // 5 goes to a
	{
		x=a;
	}
	friend void swap(First,Second);
};

class Second
{
	int y;
	public:
	void fun2 (int b) // 6 goes to b
	{
		y=b;
	}
	friend void swap(First,Second);
};

void swap(First ob1,Second ob2)
{
    cout<<"Before swapping value of x of class First="<<ob1.x<<endl;
	cout<<"Before swapping value of y of class Second="<<ob2.y<<endl;
    int temp;
	temp=ob1.x;
	ob1.x=ob2.y;
	ob2.y=temp;
	cout<<"After swapping value of x of class First="<<ob1.x<<endl;
	cout<<"After swapping value of y of class Second="<<ob2.y<<endl;
}

int main() 
{
	First ob1;
	ob1.fun1 (5);
	Second ob2;
	ob2.fun2 (6);
	swap(ob1,ob2);
	cout<<"\n*******************************BY  HEENUREET**************************\n"; 
    cout<<"********************************UID 21BCS1055*******************************"; 
	return 0;
}