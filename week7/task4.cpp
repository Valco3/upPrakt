#include<iostream>
using namespace std;
void numberOfSymbols(char arr[]);
int main()
{
    char arr[100000];
    cin.ignore();
    cin.getline(arr, 10000);
    numberOfSymbols(arr);
}
void numberOfSymbols(char arr[])
{
    int number=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        number++;
    }
    cout<<number;
}