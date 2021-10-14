#include<iostream>
using namespace std;
int main()

{
    int number;
    cin>>number;int firstNumber=number%10;
    int secondNumber=number/10%10;
    int thirdNumber=number/100%10;
    int lastNumber=number/1000;
    int reversNumber=firstNumber*1000+secondNumber*100+thirdNumber*10+lastNumber;
    cout<<reversNumber<<endl;
    return 0;
}