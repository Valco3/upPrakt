#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double temperatura;
    cout<<"Temperature in Farenheit:";
    cin>>temperatura;
    cout<<"Temperature in Celsius";
    cout<<(temperatura-32)*5/9<<endl;
    cout<<"Temperature in Kelvin";
    cout<<temperatura+275.13;
   
    return 0;
}