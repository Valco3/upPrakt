#include<iostream>
using namespace std;

void replace(char *str, char elementTarget, char replacer)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==elementTarget)
        {
            str[i]=replacer;
        }
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
    char elementTarget;
    cin>>elementTarget;
    char replacer;
    cin>>replacer;
    replace(str, elementTarget, replacer);
    printStr(str);
}