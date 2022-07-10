#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int roll_no;
    string Name;
    float weight, height;
    public:
    void display() 
    {
        cout<<"Name : "<<Name;
        cout<<"\nRoll : "<<roll_no;
        cout<<"\nHeight : "<<height;
        cout<<"\nWeight : "<<weight;
    } 
    
    void read () // to read the user given input
    {  
        cout << "Enter Name of the student: " ;
        cin >>  Name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter height of the student: ";
        cin >>  height;
        cout << "Enter weight of the student: ";
        cin >> weight;
    }
	Student()   
    {  
        strcpy(Name,"N/A");
        roll_no = 00;
        height= 165.5;
        weight= 58.2;
    }
    
    Student(Student &ob)
    {
        roll_no=ob.roll_no;
        strcpy(Name, ob.Name);
        weight=ob.weight;
        height=ob.height;
    }

    ~Student( )
    {
        for(static int i=1;i<=3;i++)
        cout<<"Destructor successfully called for object"<<i<<endl;
    }
};


	

 
int main() 
{  
    Student ob,s1,s2;
    s1.display();
    s2.read();
    s2.display();
    Student s3(s2);
    s3.display();
    return (0);
}