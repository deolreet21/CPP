/* WAP to create database of the following items: 
Name of the demo (String),Roll number of the student (int),
Height of the student (cm), Weight of the student (kg/gms)  
1) Create a Constructor to initialize values  
2) Create display () function to display the details  
3) Illustrate the use of copy constructor  
4) Also implement the concept of destructor.*/ 

#include <iostream> 
using namespace std; 
class demo 
{ 
    private: 
    string name; 
    int  rollNo; 
    int  height; //in cm
    int weight; //in kg
    public: 
    demo(string n,int r,int h,int w)   
    {   //Defining Constructor to initialize values
        name=n;             //           DEFAULT
        rollNo=r;          //        INITIALISATION=0
        height=h;         //             THROUGH
        weight=w;        //            CONSTRUCTOR
    } 
    void display(void);//Declaring member function 
    ~demo();          //Declaring Destructor
}; 

 
 

void demo::display(void) // Outside the class definition of Function
{ 
    cout<<"Student details:\n"; 
    cout<<"\nName:"<<name;
    cout<<"\nRoll Number:"<<rollNo;
    cout<<"\nHeight:"<<height<<"cm";
    cout<<"\nWeight:"<<weight<<"kg"; 
} 

demo::~demo() // Outside the class definition of Destructor
{ 
    cout<<"\nDestructor is called\n"; 
} 

int main() 
{ 
    demo ob1("Heenu",1055,167,45);                    //object creation 
    demo ob2=ob1; //Copy Constructor Called
    ob2.display(); 
    cout<<"\n*******************************BY  HEENUREET**************************\n";    
    cout<<"********************************UID 21BCS1055*******************************";   
    return 0; 
}