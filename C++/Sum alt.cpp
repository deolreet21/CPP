#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, T, arr[10];
    cout<<"Enter the number of test cases: ";
    cin>>T;
    while(T>0)    //LOOP 1 For Test Cases
    {
        cout<<"Enter the number of elements in the array:";
        cin>>n;
    	cout<<"Enter the elements of the array: ";
    	for(int i=0; i<n; i++) 
    	cin>>arr[i];	
    	if (n==1)
    	cout<<arr[0];
    	else
    	{
    		int m_sum= arr[0], curr_sum = arr[0];
    		for(int i=0; i<n-1; i++) 
    		{
    			if(arr[i+1] - arr[i] == 2)
    			{
    				curr_sum= curr_sum+arr[i+1];
    			}
    			else
    			{
    				if (curr_sum>m_sum)
    			    	m_sum = curr_sum;
    				curr_sum = arr[i+1];
    			}	
    		}
    		if (curr_sum > m_sum)
                m_sum=curr_sum;
            cout<<m_sum;
        }
    T--;    
    }//Closing WHILE LOOP 1 For Test Cases
    
return 0;
}