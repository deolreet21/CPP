/*Create a class student having- 
student uid & getnumber(),putnumber() as member functions to get the values & display it. 
Derive a class test having-
marks in all subjects & getmarks() & putmarks() as member functions to get & display the values. 
Derive another class sports from student class having-
sports score & getscore(), putscore() as member functions to get & display the values. 
Derive a class result from test & sports class & define a function display() to calculate total marks. 
Implement it with the object of result class. 
If it gives any error, resolve it by adding the required functionality.*/

#include<iostream>
using namespace std;
class student
{
    int uid;
    public:
    void getnumber()
    {
        cout <<"Enter UID:";
        cin>>uid;
    }
    
    void putnumber()
    {
        cout <<"\nUID:"<<uid <<"\n";
    }
};

class test:virtual public student
{
    public:
    int part1, part2;
    void getmarks()
    {
        cout <<"Enter Marks\n";
        cout <<"Part1:";
        cin>>part1;
        cout <<"Part2:";
        cin>>part2;
    }
    
    void putmarks()
    {
        cout <<"Marks Obtained\n";
        cout <<"\nPart1:"<<part1;
        cout <<"\nPart2:"<<part2;
    }
};

class sports:public virtual student
{
    public:
    int score;
    void getscore()
    {
        cout <<"Enter Sports Score:";
        cin>>score;
    }
    
    void putscore()
    {
        cout <<"\nSports Score is:"<<score;
    }
};

class result:public test,public sports
{
    int total;
    public:
    void display()
    {
        total =part1 +part2 +score;
        putnumber();
        putmarks();
        putscore();
        cout <<"\nTotal Score:"<<total;
    }
};

int main()
{
    resultob;
    ob.getnumber();
    ob.getmarks();
    ob.getscore();
    ob.display();
    cout<<"\n*******************************BY  HEENUREET**************************\n";     
    cout<<"********************************UID 21BCS1055*******************************";    
    return 0;
}