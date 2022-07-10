// Write a program to find the largest & smallest of three numbers. 
//(Use inline function MAX and MIN) 

#include<iostream> 
using namespace std; 
inline int max(int,int,int); 
inline int min(int,int,int); 
int main() 
{ 
    int a=1,b=2,c=3; 
	cout<<max(a,b,c)<<endl; 
	cout<<min(a,b,c); 
	cout<<"\n*******************************BY  HEENUREET**************************\n";  
    cout<<"********************************UID 21BCS1055*******************************"; 
	return 0; 
} 
//Syntax     variable = Expression1 ? Expression2 : Expression3 
int max(int a, int b, int c) 
{ 
    return (a > b && a > c ) ? a : ((b > c ) ?  b : c); 
  
} 

int min(int a, int b, int c) 
{
    return (a < b && a < c ) ? a : ((b < c ) ?  b : c);
} 

 

 