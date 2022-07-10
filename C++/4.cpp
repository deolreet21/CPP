#include<iostream> 
using namespace std;              
int main()  
{
    int a,b,c;
cout<<"Enter three numbers";
cin>>a;
cin>>b;
cin>>c;
if(a>b)
{
    if (a>c)
    {
        cout<<"first number is greatest";
    }
    else
    {
        cout<<"third number is greatest";  
    }

}
else
{
    if(b>c)
    {
        cout<<"second number is the greatest";
    }
    
    else
    {
        cout<<"third number is the greatest";
    }
    
}
return 0;
}