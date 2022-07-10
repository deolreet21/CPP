// Hierarchical Inheritance
#include<iostream>
using namespace std;
class A
{
  public:
  int a;
};

class B: public A
{
    public:
    int b;
};

class C: public A
{
    public:
    int c;
};
 
int main()
{  
    A ob1;
    B ob2;
    C ob3;
    ob2.a=10;
    cout<<ob1.a;
    cout<<ob2.a;
    ob3.a=20;
    cout<<ob3.a;
    return 0;
}