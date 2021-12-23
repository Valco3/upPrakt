#include<iostream>
using namespace std;

void readArr(int *arr, int size);
void findMinMax(int *arr, int size, int &min, int &max);

int main()
{
    int size;
    cin>>size;
    int arr[size];
    readArr(arr, size);
    int min, max;
    findMinMax(arr, size, min, max);
    cout<<min<<" "<<max;
}

void readArr(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void findMinMax(int *arr, int size, int &min, int &max)
{
    min=arr[0];
    max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(min<arr[i])
        {
            min=arr[i];
        }
        if(max>arr[i])
        {
            max=arr[i];
        }
    }
}