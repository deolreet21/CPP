//Applying Binary Search to an array containing 100 elements (numbers) by Heenureet
#include<iostream>
#include<cstdlib>   //Library for rand(),srand() functions
#include<ctime>     //Library for time() function
using namespace std;

int main()
{ 
    int i,a[100];
    int l=0,u=100,mid,result=0;
    cout<<"Enter any 20 numbers: ";
     for(i=0;i<100;i++)   //Loop for taking input to an array a of 20 elements
    {      
        a[i]=(rand()%300)+0;
        cout<<a[i]<<" ";
    }
    srand(time(0));       //So that the random comp_guess is different every time we start the program
    int j=(rand()%100)+0; //Computer is choosing a Random index number from an array a of 20 numbers
    int comp_guess=a[j]; //Computer has selected the number which is at the j th place in the array a
    cout<<"\ncomputer guess is: "<<comp_guess<<" ";
    while(l<=u)     //Loop for searching the comp_guess in the whole array one by one until index of array becomes 19
    {
        mid=(l+u)/2;
        if(comp_guess==a[mid])
        {
            result=1;
            cout<<"Number "<<comp_guess<<" found at index place "<<mid;  //Searched array and found comp_guess at an index 
            break;
        }
        else if(comp_guess>a[mid])
        {
            l=mid+1;
        }
        
        else
        {
            u=mid-1; 

        }
               
    }
    if(result==0)          
    cout<<"Number not found in the array ";//Searched the whole array such that now lower limit has exceeded upper limit but element not found
    return 0;
}