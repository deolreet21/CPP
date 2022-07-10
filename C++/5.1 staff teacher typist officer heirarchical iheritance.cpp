/*Write a program that takes information about institute staff information for
1)Teacher code, name, subject and publication
2)Officer code, name and grade
3)Typist code, name, speed and daily wages and displays it using hierarchal inheritance.*/

#include <iostream>
using namespace std;
class staff
{
    protected:
    int code;
    char name[5];
    public:
    void getstaff()
    {
        cout<<"\n\nEnter code :-"<<endl;
        cin>>code;
        cout<<"Enter name :-"<<endl;
        cin>>name;
        
    }
    
    void putstaff()
    {
        cout<<"\nNAME:-"<<name;
        cout<<"\nCODE:-"<<code;
        
    }
    
};

class teacher:public staff
{
    char sub[20];
    char pub[20];
    public:
    void getdata()
    {
        getstaff();
        cout<<"Enter Subject :-"<<endl;
        cin>>sub;
        cout<<"Enter Publication :-"<<endl;
        cin>>pub;
    }
    
    void putdata()
    {
        putstaff();
        cout<<"\nSUBJECT:-"<<sub;
        cout<<"\nPUBLICATION:-"<<pub;
    }
};

class officer:public staff
{
    char grade;
    public:
    void get_o()
    {
        getstaff();
        cout<<"Enter Grade :-"<<endl;
        cin>>grade;
    }
    void put_o(){putstaff();
    cout<<"\nGRADE:-"<<grade;
    }
};

class typist:public staff
{
    float speed, dw;
    public:
    void get_ty()
    {
        getstaff();
        cout<<"Enter speed (wpm):-"<<endl;
        cout<<"Enter daily wages:"<<endl;
        cin>>speed;
        cin>>dw;
    }
    
    void put_ty()
    {
        putstaff();
        cout<<"\nSPEED:-"<<speed;
        cout<<"\nWAGE :-"<<dw;
    }
};

int main()
{
    teacher t;
    t.getdata();
    t.putdata();
    officer o;
    o.get_o();
    o.put_o();
    typist i;
    i.get_ty();
    i.put_ty();
    cout<<"\n*******************************BY  HEENUREET**************************\n";    
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0;
}