// Hybrid Inheritance
#include<iostream>
using namespace std;
class student
{
  public:
  int rno;
  void getnumber()
  {
      cin>>rno;
  }
  void putnumber()
  {
      cout<<rno;
  }
};

class test: public virtual student
{
    public:
    int m1,m2 ;
    void getmarks()
    {
        cout<<"Enter marks for m1:";
        cin>>m1;
        cout<<"Enter marks for m2:";
        cin>>m2;
    }
    void putmarks()
    {
        cout<<"Marks for m1:";
        cout<<m1;
        cout<<"Marks for m2:";
        cout<<m2;
    }
};

class sports: public virtual student
{
    public:
    int score ;
    void getscore()
    {
        cin>>score;
    }
    void putscore()
    {
        cout<<score;
    }
};

class result: public test, public sports
{
    public:
    int total ;
    void display()
    {
        total=m1+m2+score;
        cout<<total;
    }
};
 
int main()
{  
    result ob;
    ob.getnumber();
    ob.putnumber();
    ob.getmarks();
    ob.putmarks();
    ob.getscore();
    ob.putscore();
    ob.display();
    return 0;
}