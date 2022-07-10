//WAP to create a class Pairs. Objects of type Pairs can be used in any situation where ordered pairs are needed. Our Task is to overload operator >> and << so that objects of class Pairs are to be input and output in the form (5,3) (5,-6) (-5,6) or (-5,-3).There is no need to implement any constructor/method .

#include <iostream>
#include <cstring>          // for string functions
using namespace std;
class Pairs 
{
    private:
    char numpair[20];
    public:       // friend function to overload the output operator
    friend ostream&operator<<(ostream&output, const Pairs &p) 
    {
    output<<p.numpair;
    return output;  
    }
    friend istream&operator>>(istream&input, Pairs &p)  // friend function to overload the input operator
    {
        char pair[20];
        input>> pair;       // inputting the pair values
        int len = strlen(pair);      // getting the length of the inputed string
        // as per given format "(x,y)" the min length of string should be 5 and also
        // the string should contain the first character "(", the last character ")"
        // and a comma in between the string
        if (len< 5 || pair[0] != '(' || pair[len - 1] != ')' || !strstr(pair, ",")) 
        {
            cout<< "Invalid pair value found!" <<endl;
            strcpy(p.numpair, "");   // in case of Invalid value assing blank string to the pair value
        }
        else
        {
            strcpy(p.numpair, pair);    // in case of valid value copy the input value to the object member datq
        }
        return input;
    }
};

int main() 
{
    Pairs p;
    cout<< "Enter the value of pair object: ";
    cin>> p;
    cout<< "Entered pair value is: " << p <<endl;
    cout<<"\n*******************************BY  HEENUREET**************************\n";   
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0;
}