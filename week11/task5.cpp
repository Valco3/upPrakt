#include<iostream>
using namespace std;

void reverse(char *str)
{
   
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    char tempStr[length];
    for(int i=0, j=length-1; str[i]!='\0';i++,j--)
    {
        tempStr[i]=str[j];
    }
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=tempStr[i];
    }
}

void printStr(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
}

int main()
{
    char str[10];
    cin.getline(str,10);
    reverse(str);
    printStr(str);
}