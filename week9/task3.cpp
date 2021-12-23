#include<iostream>
using namespace std;

const int SIZE=100;

void readArr(int arr[][SIZE], int rows, int cols);
void transposeMatrix(int arr[][SIZE], int transposedArr[][SIZE], int rows, int cols);
void printArr(int arr[][SIZE], int rows, int cols);

int main()
{
    int rows, cols;
    cin>>rows>>cols;
    int arr[SIZE][SIZE];
    readArr(arr, rows, cols);
    int transposedArr[SIZE][SIZE];
    transposeMatrix(arr, transposedArr, rows, cols);
    printArr(transposedArr, cols, rows);
}

void readArr(int arr[][SIZE], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
}

void transposeMatrix(int arr[][SIZE], int transposedArr[][SIZE], int rows, int cols)
{
   
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           transposedArr[j][i]=arr[i][j];
        }
    }

    
}

void printArr(int arr[][SIZE], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}