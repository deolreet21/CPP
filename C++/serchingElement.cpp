#include<iostream>
using namespace std;
int main()
{
    int i,n=5,x=3;         // element to be deleted is x=3
    int a[5]={1,2,3,4,5};
    for ( i=0; i<n; i++)
    {
        if(a[i]==x)
        break;
    }
    if(i<=n) //condition to check if the element is found or not
    {   //current value of i is 2
        for(int j=i; j<n-1; j++)
        {
            a[j]=a[j+1];
        }
    }
    for (int i=0; i<n-1; i++)
    {
        cout<<a[i];
    }
    return 0;
}