#include<iostream>
using namespace std;
int main(){
    int x,y,z=0;
    cout<<"firstNumber:";
    cin>>x;
    cout<<"secondNumber:";
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<"Изход:"<<endl<<"firstNumber:"<<x<<endl<<"secondNumber:"<<y;
    
}