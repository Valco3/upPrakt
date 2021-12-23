#include<iostream>
using namespace std;

const int SIZE=100;

void substr(char *str, char *subStr, int startIndex, int endIndex)
{
   
    for(int i=startIndex, j=0;i<=endIndex;i++,j++)
    {
        subStr[j]=str[i];
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
    char subStr[10];
    int startIndex, endIndex;
    cin>>startIndex>>endIndex;
    substr(str, subStr, startIndex, endIndex);
    printStr(subStr);
}