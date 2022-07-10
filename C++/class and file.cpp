/*WAP to read the class object of student info such as name, age and roll no from the keyboard and to 
store them on a specified file using read() and write() functions. Again the same file is opened for
reading and displaying the contents of the file on the screen.*/ 

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
    void putdata();    //Declaring Member Function (for getting student data)
    void getdata();   //Declaring Member Function (for displaying student data)
};

void A::getdata()   //Defining Member Function outside the class
{   // Get student data through the console so that it can be written to the file
    cout<<"enter name";
    cin.getline(name,40);
    cout<<"enter age";
    cin>>age;
    cout<<"enter rollno";
    cin>>rollno;
}
void A::putdata()//Defining Member Function outside the class
{   // Display student data on the console after reading it from the file
    cout<<"\n name is="<<name<<"\n";
    cout<<"age is="<<age<<"\n";
    cout<<"rollno is="<<rollno<<endl;
}

int main()
{
    ofstream fout;                   //Creating an object- fout for Writing to the file xyz.txt
    fout.open("xyz.txt",ios::out);  //open xyz.txt in writing mode
    A obj1;                        //Creating object of class A for getting data member through the console.
    obj1.getdata();               //Getting data member through the console by calling getdata() function.
                                 //syntax->objout.write((char*)&obj1,sizeof(obj1);
    fout.write((char*)&obj1,sizeof(obj1));            //writing to file the data entered in object obj1  
    cout<<"object is successfully written to file";
    fout.close();                                   // Closing Writng mode of xyz.txt 
    
    ifstream fin;                        //Creating an object- fin for reading from the file xyz.txt
    fin.open("xyz.txt",ios::in);        //open xyz.txt in reading mode
    A obj2;                            //Creating object of class A for showing data member through the console.
    cout<<"reading object from file"; //Till now no data in obj2
                                     //syntax->objin.read((char*)&obj2,sizeof(obj2)
    fin.read((char*)&obj2,sizeof(obj2));      //Reading from file the data of size of object obj2
    obj2.putdata(); //Call putdata() function.Dislay through console, the data caught from file by object obj2  
    fin.close();   // Closing Reading mode of xyz.txt 
    cout<<"\n*******************************BY  HEENUREET**************************\n";           
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0; 
} 