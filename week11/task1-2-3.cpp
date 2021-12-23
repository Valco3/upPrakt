#include<iostream>
using namespace std;

void strcpy(char *str, char *str1)
{
    for(int i=0;str[i]!='\0';i++)
    {
        str1[i]=str[i];
    }
}

int strlen(char *str)
{
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

char* strcat(char *str, char *str1)
{
    char* arrCat=new char[strlen(str)+strlen(str1)+1];
    for(int i=0;str[i]!='\0';i++)
    {
        arrCat[i]=str[i];
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        arrCat[i+strlen(str)]=str1[i];
    }
    arrCat[strlen(str)]='\0';
    return arrCat;
}



int main()
{
    char str[10];
    cin.getline(str,10);
    char str1[10];
    // strcpy(str, str1);
    // cout<<strlen(str1);
    strcat(str,str1);
}
