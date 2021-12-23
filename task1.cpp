#include <iostream>
using namespace std;

const int SIZE = 100;

void readArr(int arr[][5], int rows);
void readArr1(int arr[], int size);
int findLongestMatching(int arr[][5], int arr1[], int rows, int size)
{
    int counter = 0;
    int maxCounter = 0;
    int matchingColumn = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < rows && j < size; j++)
        {
            if (arr[j][i] == arr1[j])
            {
                counter++;
            }
        }
        if (maxCounter < counter)
        {
            maxCounter = counter;
            matchingColumn = i;
        }
        counter = 0;
    }
    return matchingColumn;
}

int main()
{
    int rows;
    cin >> rows;
    int arr[rows][5];
    readArr(arr, rows);
    int size;
    cin >> size;
    int arr1[size];
    readArr1(arr1, size);
    cout << findLongestMatching(arr, arr1, rows, size);
}

void readArr(int arr[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void readArr1(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}