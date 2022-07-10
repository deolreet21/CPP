using namespace std;
#include<iostream>
int main()
{ 
    int l,b,area;
    float sqmcost,totalcents;
    cout<<"Enter the length of the bed:\n";
    cin>>l;
    cout<<"Enter the width of the bed:\n";
    cin>>b;
    cout<<"Enter the cost per square meter:\n";
    cin>>sqmcost;
    area=l*b;
    sqmcost=sqmcost*100;
    totalcents=sqmcost*area;
    cout<<"The quantity of the cover needed is: "<<area<<endl;
    cout<<"Total cost in cents is: "<<totalcents;
    return 0;
}

