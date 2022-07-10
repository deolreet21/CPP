/*9.2WAP to allocate memory dynamically for an object of a given classusing class's constructor*/
#include <iostream>
using namespace std;
class demo 
{
	int* ptr;
	public:
	demo()
	{
		ptr=new int[6];
		for(int i=0;i<6;i++)
		{
		    cin>>ptr[i];
		}    
	}
	void display()
	{
		for(int i=0;i<6;i++)
		{
		    cout<<ptr[i]<<endl;
		} 
	}
};

int main()
{
	demo obj;
	obj.display();
}
