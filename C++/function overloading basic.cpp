#include<iostream>
using namespace std;
void alpha(int);
void alpha(double);

int main()
{
    alpha(2);
    alpha(0.3);
    return 0;
}

void alpha(int x)
{
    cout<<x*x*x<<endl;
}

void alpha(double y)
{
    cout<<y*y*y;
}
