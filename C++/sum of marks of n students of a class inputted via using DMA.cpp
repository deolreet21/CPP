//Q9.1 WAP to calculate sum of marks of n students of a class inputted via using DMA
#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout<<"Number of students" << endl;
	cin>>n;
	int *ptr = new int[n];
	cout<<"Enter the marks of the students" << endl;
	for( int i=0;i<n;i++)           	
	{
		cin>>ptr[i];    // we can also write *(ptr+i);
	}
	for( int i=0;i<n;i++)            
	{
		sum=sum+ptr[i];
	}
	cout << "sum is:" << sum << endl;
	return 0;
}