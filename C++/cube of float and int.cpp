//WAP to calculate and display cube of an integer and float variable using function overloading. 
#include <iostream>
using namespace std;
int cube(int);
float cube(float);
int main() 
{
    int a = 5;
    float b = 5.5;
    cout<< "Cube of integer number " << a << " is " << cube(a) <<endl;
    cout<< "Cube of float number " << b << " is " << cube(b) <<endl;
    cout<<"\n*******************************BY  HEENUREET**************************\n";    
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0;
}

int cube(int x) 
{
return x*x*x;
}

float cube(float y)
{
return y*y*y;
}

