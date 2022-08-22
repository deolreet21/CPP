//Input of character,string and number using get and put which are only for a string of characters
#include<iostream>     
#include<stdio.h>          
using namespace std;           
    int rollno;                 
    char grade;                 
    char name[20];             

int main() 
{  
    cout<<"hello heenu\n";                       
    void input();
    void output();
    input();
    output();
    return 0;
}


void input()
{
    cout<<"Kindly Enter Details--\n";       //Can't write puts("Kindly Enter Details--\n");
    cout<<"Enter your name:";              //Can't write puts("Enter your name:");
    gets (name);                          // gets is a function under stdio header file 
    cout<<"Enter your rollno:";          //Can't write puts("Enter your rollno:");
    cin>>rollno;                        // can't write gets(rollno); as gets takes only character values that too a sting more specifically                  
    cout<<"Enter your grade";                   //Can't write puts("Enter your grade");as grade is not a string              
    cin>>grade;                                //Can't write gets(grade);as grade is not a string
}
void output()
{
    cout<<grade;        //Can't write puts(grade);   puts is only used to print non-constant strings 
    
    puts(name);    //when u use puts it automatically put the cursor to next line in output (see no endl used after puts statement )
    cout<<"bye"; 
    //puts(grade);   //grade willn't be printed becoz grade is not a string 
    // Will give warning msg: invalid conversion from 'char' to 'const char*' [-fpermissive]",
	
}
 
                                       
    //puts(rollno); 
  
  





