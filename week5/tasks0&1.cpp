#include<iostream>
using namespace std;

double greaterOne(int num1, int num2);
int primeNumbersUntilOneHundred(int hundred);
int main()
{
    // int num1,num2;
    // cin>>num1>>num2;
    // cout<<greaterOne(num1,num2);
   
    
    primeNumbersUntilOneHundred(100);
}

// double greaterOne(int num1, int num2)
// {
//     if(num1>num2)return num1;
//         else return num2;
// }
int primeNumbersUntilOneHundred(int num)
{
    
   for(int m=2;m<=100;m++)
   {
    bool flag=true;
   for(int i=2;i<=m/2;i++)
   {
      
       if(m%i==0)
       {
        flag=false;
        break;
       }
    
   }
   if(flag)cout<<m<<" ";
   }
}
