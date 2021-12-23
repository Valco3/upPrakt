#include<iostream>
using namespace std;

int findElement(char *str, char elementTarget)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==elementTarget) return i;
    }
    return -1;
}

int main()
{
    char str[10];
    cin.getline(str,10);
    char elementTarget;
    cin>>elementTarget;
    cout<<findElement(str, elementTarget);
}