#include<iostream>
using namespace std;
void readArr(int arr[], int size);
void reverseArr(int arr[], int size);
void printArr(int arr[],int size);
int main()
{
    int size;
    cin>>size;
    int arr[size];
    readArr(arr, size);
    reverseArr(arr,size);
    printArr(arr,size);
}
void readArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void reverseArr(int arr[], int size)
{
    int tempArr[size];
    for(int i=0, j=size-1;i<size;i++,j--)
    {
        tempArr[i]=arr[j];
    }
    for(int i=0;i<size;i++)
    {
        arr[i]=tempArr[i];
    }
}
void printArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}