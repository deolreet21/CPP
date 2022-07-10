/*Write a program in C++ to read the content from a text file Demo.txt, 
count and display the number of alphabets present in it.*/

#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Demo.txt",ios::out);
    fout<<"21BCS1055!!";
    fout.close();
    
    ifstream fin;
    fin.open("Demo.txt",ios::in);
    char ch;
    int count=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if(isalpha(ch))
        {
            count++;
            cout<<endl<<"Alphabet "<<count<<" is= ";
            cout<<ch;
        }
    }
    cout<<endl<<"So total Number of alphabets in the file are: "<<count;
    
    fin.close();
    
    cout<<"\n*******************************BY  HEENUREET**************************\n";           
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0;
}