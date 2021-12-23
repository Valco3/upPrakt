#include<iostream>
using namespace std;

void readArr(int *arr, int size);
void* findElement(int *arr, int size, int element);

int main()
{
    int size;
    cin>>size;
    int arr[size];
    readArr(arr, size);
    int element;
    cin>>element;
    cout<<findElement(arr, size, element);
}

void readArr(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void* findElement(int *arr, int size, int element)
{
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)==element)
        {
            return arr+i;
        }
    }
    return nullptr;
}