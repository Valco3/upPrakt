#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<number;i+=2)
    {
        cout<<arr[i]<<" ";
    }
}