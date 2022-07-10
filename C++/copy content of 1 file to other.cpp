/*WAP to copy the contents of one file to another and display it on output screen. 

Create two files inside the directory where you're saving your program or going to
save your C++ program of copy file (given below)*/ 

#include<iostream> 
#include<fstream> 
using namespace std; 
int main() 
{ 
    ifstream fin;                    //create object for reading Demo.txt
    fin.open("Demo.txt");           //open Demo.txt using object fin under in mode
    ofstream fout;                 //create object for reading pastehere.txt
    fout.open("pastehere.txt");   //open pastehere.txt using object fout under out mode
    char ch;                     //Declare datatype which is to be read from Demo.txt
    if(fin && fout)             //Condition for checking files are opened or not
    {
        while(true)           //Infinite Loop
        { 
            fin>>ch;        //Read characters from Demo.txt using its reading mode object i.e. fin
             //>> is extraction operator used to read the written characters from a file here Demo.txt
            //fin specifies we are reading characters from the file Demo.txt
            if(fin.eof())  //If pointer has reached end of Demo.txt file 
            {
                break;   //then come out of loop
            }
            fout<<ch;  //Write the character read by fin to pastehere.txt using its writing mode object i.e. fout
            //<< is insertion operator used to write the character into the file here pastehere.txt
            //fout specifies we are writing characters to the file pastehere.txt
        } 
        cout<<"\nFile copied successfully."; 
        fin.close();
        fout.close();
    }
    cout<<"\n*******************************BY  HEENUREET**************************\n";           
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0; 
}


