#include<iostream>
using namespace std;
void readArr(int arr[], int size);
int numberOfBuggerNeighbors(int arr[], int size);
int main()
{
    int size=0;
    do
    {
        cout<<"Enter array size:";
        cin>>size;
    }while(size<1||size>100);
    int arr[size];
    readArr(arr, size);
    cout<<numberOfBuggerNeighbors(arr, size);
}
void readArr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
int numberOfBuggerNeighbors(int arr[], int size)
{
    int number=0;
    for(int i=1;i<size-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) number++;
    }
    return number;
}