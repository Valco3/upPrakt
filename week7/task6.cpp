#include<iostream>
using namespace std;
void readArr(int arr[], int size);
void multiplyByNumber(int arr[], int size, int number);
void printArr(int arr[], int size);
int main()
{
    int size, number;
    cin>>size;
    cin>>number;
    int arr[size];
    readArr(arr, size);
    multiplyByNumber(arr, size, number);
    printArr(arr, size);
    
}
void readArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void multiplyByNumber(int arr[], int size, int number)
{
    for(int i=0;i<size;i++)
    {
        arr[i]*=number;
    }
}
void printArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}