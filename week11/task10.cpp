#include<iostream>
using namespace std;

int strlen(char *str)
{
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}

bool strstr(char *str, char *subStr)
{
    int subStrLength=strlen(subStr);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=subStr[0])
        {
            for (int j = 0, p = i; subStr[j] != '\0' && str[p] != '\0'; j++, p++)
            {
                if(subStr[j] != str[p])break;
                if(p == subStrLength)return true;
            }
        } 
    }
    return false;
}


int main()
{
    char str[10];
    cin.getline(str,10);
    char subStr[10];
    cin.getline(str,10);
    cout<<strlen(subStr);
    cout<<boolalpha<<strstr(str,subStr);
}