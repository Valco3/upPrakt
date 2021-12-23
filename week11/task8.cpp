#include<iostream>
using namespace std;

int findNumberOfElement(char *str, char elementTarget)
{
    int counter=0;
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]==elementTarget)counter++;
    }
    return counter;
}

int main()
{
    char str[10];
    cin.getline(str,10);
    char elementTarget;
    cin>>elementTarget;
    cout<<findNumberOfElement(str, elementTarget);
}