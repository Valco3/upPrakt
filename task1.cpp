#include<iostream>
using namespace std;
bool isPrime(int num);
bool arePaired(int num1,int num2);
void printPairs(int startNum, int endNum);
int main()
{
    int startNum,endNum;
    cin>>startNum>>endNum;
    //a b prosti a+4=b; 
    printPairs(startNum,endNum);
}
bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
bool arePaired(int num1,int num2)
{
    if(isPrime(num1) && isPrime(num2))return true;
    return false;
}
void printPairs(int startNum, int endNum)
{
    for(int i=startNum;i<=endNum-4;i++)
    {
        if(arePaired(i,i+4))cout<<"("<<i<<" "<<i+4<<")";
    }
}