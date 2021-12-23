#include<iostream>
using namespace std;
void readArr(int arr[], int size);
void printEven(int arr[], int size);
int main()
{
    int size;
    cin>>size;
    int arr[size];
    readArr(arr, size);
    printEven(arr, size);
}
void readArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void printEven(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)cout<<arr[i]<<" ";
    }
}