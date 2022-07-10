//C++ Program for Matrix addition using classes and function
#include<iostream>
using namespace std;
int row, col,r,c;
//Defining Class Matrix for addition
class Matrix
{
    int a[20][20];
    public:
    Matrix()
    {
        r=row;
        c=col;
    }
    void get_data(int r, int c)
    {
        cout << "Enter the elements of  first matrix: ";
        for (int i = 0;i<r;i++ ) 
        {
            for (int j=0;j<c;j++) 
            {
              cin>>a[i][j];
            }
        }
    }
    
    Matrix operator + (Matrix ob1)
    {
        Matrix s[r][c];
        for (int i = 0;i<r;i++ ) 
        {
            for (int j = 0;j<c;j++ ) 
            {
                s[i][j]=a[i][j]+ob1.a[i][j];
                cout << s[i][j] << "  ";
                if(j == c - 1)
                cout << endl;
            } 
        }
    }
};

int main()
{
    Matrix ob1,ob2,ob3;
    cout<<"Enter the number of rows(should be >1 and <10): ";
    cin>>row;
    cout<<"Enter the number of col(should be >1 and <10): ";
    cin>>col;
    ob1.get_data();
    ob2.get_data();
    return 0;
}