#include<iostream>
using namespace std;

double greaterOne(int num1, int num2);
int primeNumbers(int n);
bool palindrom(int n);

int main()
{
    // int num1,num2;
    // cin>>num1>>num2;
    // cout<<greaterOne(num1,num2);
   int n;
   cin>>n;
    
    primeNumbers(n);
    
}

// double greaterOne(int num1, int num2)
// {
//     if(num1>num2)return num1;
//         else return num2;
// }
int primeNumbers(int n)
{
    
   for(int m=2;m<=n;m++)
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
   if(flag&&palindrom(m)&&m>10)cout<<m<<" ";;
   }
}
bool palindrom( int n)
{
    int a=n;
    int f=0;
    while(n!=0)
    {
        f=10*f+n%10;
        n/=10;
    }
    return(a==f);
}
