#include <iostream>
using namespace std;

void readArr(int *arr, int size);
void multiplyArr(int *arr, int size, int multiplier);
void printArr(int *arr, int size);

int main()
{
    int size;
    cin >> size;
    int arr[size];
    readArr(arr, size);
    int multiplier;
    cin >> multiplier;
    multiplyArr(arr, size, multiplier);
    printArr(arr, size);
}

void readArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void multiplyArr(int *arr, int size, int multiplier)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= multiplier;
    }
}

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}