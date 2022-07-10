#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream obj;
    //open file in writing mode
    obj.open("test.txt",ios::out);
    obj<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"Current position in writing mode"<<obj.tellp()<<endl;
    obj.close();
 
    //open file in reading mode
    obj.open("test.txt",ios::in);
    cout<<"After opening, Current position in reading mode "<<obj.tellg()<<endl;
    char ch;
    while(!obj.eof())
    {
        cout<<"At position : "<<obj.tellg();   //display current position on console
        obj>>ch;   //read character from file
        cout<<" Character \""<<ch<<"\""<<endl;  //display read character on console
    }
    obj.close();
    return 0;
}    