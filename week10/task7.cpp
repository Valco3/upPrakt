#include<iostream>
using namespace std;

//abSd43 -> ABsD##
void changeSymbol(char &symbol)
{
    if(symbol>='0' && symbol <= '9')symbol = '#';
    else if(symbol>='a' && symbol <= 'z')symbol -= 'a'-'A';
    else symbol += 'a'-'A';
}

void changeString(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        changeSymbol(str[i]);
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
    cin.getline(str, 10);
    changeString(str);
    printStr(str);
}