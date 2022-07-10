/*WAP for creating a matrix class which can handle integer matrices of different dimensions. 
Overload the operator (+) for addition and (==) comparison of matrices.*/

#include <iostream>
#define MAXROWS 50
#define MAXCOLS 50
using namespace std;

class Matrix            // Class for Matrix operator overloading
{
    public:
    int arr[MAXROWS][MAXCOLS];        // For input Matrix
    int rows, cols;
    Matrix() 
    {
        rows = cols = 2;
        
    }
    Matrix(int r, int c, int mat[MAXROWS][MAXCOLS]) 
    {                               // Overloaded constructor to initlize the Matrix with dimensions
        rows = r;
        cols = c;
        for (int i = 0; i< rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                arr[i][j] = mat[i][j];
            }
        }
    }
    void display()  // Function to display the elements of Matrix
    {
        for (int i = 0; i< rows; i++) 
        {
            cout<< " [ ";
            for (int j = 0; j < cols; j++) 
            {
                cout<<arr[i][j] << ", ";// Print the element
            }
            cout<< "]" <<endl;
        }
        cout<<endl;
    }
    Matrix operator+(Matrix x)  // Function for + operator overloading
    {
        if (x.rows != rows || x.cols != cols || (rows == 0 && cols == 0)) 
        {
            return Matrix();
        }
        int mat[MAXROWS][MAXCOLS];       // To store the sum of Matrices
        for (int i = 0; i< rows; i++)             // Travarse the Matrix x
        {
            for (int j = 0; j < cols; j++) 
            {
                mat[i][j] = arr[i][j] + x.arr[i][j];// Add the corresponding blocks of Matrices
            }
        }
        return Matrix(rows, cols, mat);
    }
    
    int operator==(Matrix x)  // Function for == operator overloading
    {
        if (x.rows != rows || x.cols != cols) 
        {
            return 0;
            
        }
        for (int i = 0; i< rows; i++) // Travarse the Matrix x
        {
            for (int j = 0; j < cols; j++) 
            {
                if (arr[i][j] != x.arr[i][j])  // Add the corresponding blocks of Matrices
                {
                    return 0;
                }
            }
        }
        return 1;
    }
};



int main()

{

    int arr1[MAXROWS][MAXCOLS], arr2[MAXROWS][MAXCOLS];
    arr1[0][0] = 1;             // inputing values to array 1
    arr1[0][1] = 2;
    arr1[1][0] = 3;
    arr1[1][1] = 4;
    arr2[0][0] = 4;       // inputing values to array 2
    arr2[0][1] = 3;
    arr2[1][0] = 2;
    arr2[1][1] = 1;
    Matrix mat1(2, 2, arr1);     // Declare Matrices as objects
    Matrix mat2(2, 2, arr1);
    Matrix mat3(2, 2, arr2);
    Matrix mat4;
    cout<< "Elements of Matrix 1:" <<endl;        // Printing the elements of first matrix
    mat1.display();
    cout<< "Elements of Matrix 2:" <<endl;             // Printing the elements of second matrix
    mat2.display();
    cout<< "Elements of Matrix 3:" <<endl;             // Printing the elements of third matrix
    mat3.display();
    mat4 = mat1 + mat3;              // Addition of two matrices using operator overloading
    cout<< "Elements of Matrix after addition of Matrix 1 and Matrix 3:" <<endl;
    mat4.display();
    if (mat1 == mat2)            // Equating two matrices using operator overloading
    {
        cout<< "Matrix 1 is equals to Matrix 2" <<endl;
    }
    else 
    {
        cout<< "Matrix 1 is not equals to Matrix 2" <<endl;
    }
    
    if (mat1 == mat3)   // Equating two matrices using operator overloading
    {
        cout<< "Matrix 1 is equals to Matrix 3" <<endl;
    }
    else 
    {
        cout<< "Matrix 1 is not equals to Matrix 3" <<endl;
    }
    cout<<"\n*******************************BY  HEENUREET**************************\n";    
    cout<<"********************************UID 21BCS1055*******************************"; 
    return 0;
}


