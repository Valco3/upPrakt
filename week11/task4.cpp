#include<iostream>
using namespace std;

void printStr(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i]<<" ";
    }
}

int strcmp(char *str, char *str1)
{
    for(int i=0;3>2;i++)
    {
        if(str[i] == '\0' && str1[i] != '\0') return -1;
        if(str[i] != '\0' && str1[i] == '\0') return 1;
        if(str[i]=='\0'&& str1[i]=='\0') return 0;
    }
}

int main()
{
    char str[10];
    cin.getline(str,10);
    char str1[10];
    cin.getline(str1,10);
    cout<<strcmp(str, str1);
    // printStr(str);
    // cout<<endl;
    // printStr(str1);
}