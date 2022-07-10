/*WAP to read the class object of student info such 
as name, age and roll no from the keyboard and to 
store them on a specified file using read() and 
write() functions. Again the same file is opened for
reading and displaying the contents of the file on 
the screen.*/ 

//syntax->objout.write((char*)&obj1,sizeof(obj1);

//objin.read((char*)&obj2,sizeof(obj2)

#include<fstream>
#include<iostream>
using namespace std;  
class A   //class A to read and write student details 
{
    public:
    char name[40];
    int age;
    int rollno;
    public:
    void putdata();
    void getdata();
};
void A::getdata()
{
    cout<<"enter name";
    cin.getline(name,40);
    cout<<"enter age";
    cin>>age;
    cout<<"enter rollno";
    cin>>rollno;
}
void A::putdata()
{
cout<<"\n name is="<<name<<"\n";
cout<<"age is="<<age<<"\n";
cout<<"rollno is="<<rollno<<endl;
}

int main()
{
ofstream fout;
fout.open("xyz.txt",ios::out);
A obj1;
obj1.getdata();
fout.write((char*)&obj1,sizeof(obj1));//write data to file
cout<<"object is successfully written to file";
fout.close();
ifstream fin;
fin.open("xyz.txt",ios::in);  
A obj2;
cout<<"reading object from file";
fin.read((char*)&obj2,sizeof(obj2));
obj2.putdata();
fin.close();
cout<<"\n*******************************BY  HEENUREET**************************\n";           
cout<<"********************************UID 21BCS1055*******************************"; 
return 0; 
} 