#include<iostream>               
using namespace std;           //using is keword, std is a file that belongs to namespace and std means standard
    int rollno;                  // declaration of rollno as identifier to store rollno
    char grade;                 // declaration of grade as identifier to store single character of grade like A, B, C, D, E
    char name[20];             // declaration of name as identifier which is a string of 20 characters to store name

int main()    
{ 
    cout<<"hello heenu\n";                        
    void input();            // declaration of a function "input" of void type(NRNA) to get the input         
    void output();          // declaration of a function "output" of void type(NRNA) to get the output         
    void output();
    input();              //invoking (calling) of input function
    output();           //invoking (calling) of output function
}
void input()           //Definition of input function
{
    cout<<"Kindly Enter Details--"<<endl;       
    cout<<"Enter your name:";              
    cin>>name;
    cout<<endl;                                  //    endl is a operator under iostream header file          
    cout<<"Enter your rollno:";               //    cout is a operator under iostream header file
    cin>>rollno;                               //    cin is a operator under iostream header file
    cout<<endl;
    cout<<"Enter your grade:";                  //    << are called output operators
    cin>>grade;                              //    >> are called input operators
}
void output()                         //Definition of output function
{ 
    cout<<name<<endl;                                       
    cout<<rollno<<endl;  
    cout<<grade;
} 
  
  
  