#include <iostream>
using namespace std;
bool isPalindrome(char arr[]);
int numberOfSymbols(char arr[])
{
    int number = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        number++;
    }
    return number;
}

int main()
{
    int size = 0;
    do
    {
        cout << "Input size: ";
        cin >> size;
    } while (size < 1 || size > 100);
    char arr[size];
    cin.ignore();
    cin.getline(arr, size);
    cout << boolalpha << isPalindrome(arr);
}
bool isPalindrome(char arr[])
{
    int size = numberOfSymbols(arr);
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
    }
    return true;
}