Answer 4.
#include<iostream>
using namespace std;
class demo
{
    char name[20];
    int unit;
    float charges;
    public:
    void get()
    {
        cout<<"\nEnter the username & Unit’s of Electricity used:" ;
        cin>>name;
        cin>>unit;
    }
    void check()
    {
        if(unit<=100)
        {
            charges=unit*0.40;
            charges=charges+150;
        }
        else if(unit<=300||unit>100)
        {
            charges=unit*0.50;
            charges=charges+150;
        }
        else
        {
            charges=unit*0.60;
            charges=charges+150;
        }
    }
    void disp()
    {
        if(charges>=250)
        {
            charges=charges+(0.15*charges);
        }
        cout<<name<<"      "<<charges<<endl;
    }
};
int main()
{
    int n,i;
    demo ob[10];
    cout<<"\nNumber of electricity User:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        ob[i].get();
        ob[i].check();
    }
    cout<<"\nElectricity User’s: \n";
    cout<<"\nName\t Total cost(charges)\n";
    cout<<"=================================\n";
    for(i=0;i<n;i++)
    {
        ob[i].disp();
    } 
    cout<<"\nBy HeenuReet 21BCS1055";
    return 0;
}