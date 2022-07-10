#include<iostream>

using namespace std;

class Dummy

{

  private:

  int a,b;

  int *p;

  public:

  Dummy(){

    a=0;  //memory allocated to a

   b=0;

   p=new int;

    

  }

  void setdata(int x,int y,int z)

  {

    a=x;

    b=y;

    *p=z;

  }

  void showdata()

  {

    cout<<a<<endl<<b<<endl<<*p;

  }

  Dummy( Dummy &d)

  {

   a=d.a;

    b=d.b;

    p=new int;

    *p=*(d.p);
  }

};

int main()

{

  Dummy d1;

  d1.setdata(3,4,6);//d1->a=3,b=4,*p=6

  Dummy d2=d1;//copy constructord1->

  

  d2.showdata();

}