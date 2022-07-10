//write a program to count number of lines

//write(),read()

//syntax->objout.write((char*)&obj1,sizeof(obj1);

objin.read((char*)&obj2,sizeof(obj2)

#include<fstream>

#include<iostream>

using namespace std;  

class A   

{

  public:

  char name[40];

  int age;

  int weight;

  char gender;

  public:

  void putdata();

  void getdata();

};

void A::putdata()

{

  cout<<"enter name";

  cin.getline(name,40);

  cout<<"enter age";

  cin>>age;

  cout<<"enter weight";

  cin>>weight;

  cout<<"enter gender";

  cin>>gender;

}

void A::getdata()

{

  cout<<"name is="<<name<<"\n";

  cout<<"age is="<<age<<"\n";

  cout<<"weight is="<<weight<<endl;

  cout<<"gender is="<<gender<<endl;

}

int main()

{

  ofstream fout;

  fout.open("file2.txt",ios::out);

  A obj1;

  obj1.putdata();

  fout.write((char*)&obj1,sizeof(obj1));//write data to file

  cout<<"object is successfully written to file";

  fout.close();

  ifstream fin;

  fin.open("file2.txt",ios::in);  

  A obj2;

  cout<<"reading object from file";

  fin.read((char*)&obj2,sizeof(obj2));

  obj2.getdata();

  fin.close();

   

   

}