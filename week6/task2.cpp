#include<iostream>
using namespace std;
void printNFibonacciNumber(int number);
int main()
{
    int num=0;
    do
    {
        cout<<"Input whole digit: ";
        cin>>num;
    }while(num<0);
    printNFibonacciNumber(num);
}
void printNFibonacciNumber(int number)
{
    int temp=0, firstNum=1, secondNum=1;
   
    for(int i=2;i<=number-1;i++)
    {
        secondNum=temp+firstNum;
        temp=firstNum;
        firstNum=secondNum;
    }
    cout<<firstNum;
}