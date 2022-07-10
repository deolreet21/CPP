//Applying Linear Search to an array containing 20 elements (numbers)
#include<iostream>
#include<cstdlib>   //Library for rand(),srand() functions
#include<ctime>     //Library for time() function
using namespace std;
int main()
{ 
    int i,a[20];
    cout<<"Enter any 20 numbers: ";
     for(i=0;i<20;i++)   //Loop for taking input to an array a of 20 elements
    {      
        cin>>a[i];
    }
    srand(time(0));       //So that the random comp_guess is different every time we start the program
    int j=(rand()%20)+0; //Computer is choosing a Random index number from an array a of 20 numbers
    int comp_guess=a[j]; //Computer has selected the number which is at the j th place in the array a
    for(i=0;i<20;i++)    //Loop for searching the comp_guess in the whole array one by one until index of array becomes 19
    {
        if(a[i]==comp_guess)
        {
            break;
        }
        else
        {
            cout<<"Just checked"<<"number at index"<<i<<"and the number is: "<<a[i]<<endl;

        }
    }
    if(i<20)
    cout<<"Number "<<comp_guess<<" found at index place "<<i;
    else
    cout<<"Number not found in the array ";
    return 0;
}