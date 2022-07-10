/* WAP to perform exception handling for Divide by zero Exception.*/ 
#include <iostream> 
using namespace std; 
double division(int a, int b)  
{ 
    if( b == 0 )  
    { 
        throw "Division by zero condition!"; 
    } 
    return (a/b); 
} 

int main ()  
{ 
    int x = 50; 
    int y = 0; 
    double z = 0; 
    try  
    { 
        z = division(x, y); 
        cout<< z <<endl; 
    }  
    catch (const char* msg)  
    { 
        cerr<< msg <<endl;  
    } 
    cout<<"\n*******************************BY  HEENUREET**************************\n";     
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0; 
} 

