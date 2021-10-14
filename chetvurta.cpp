#include<iostream>
using namespace std;
int main(){
int x,y=0;
cin>>x;
for(int i=1;i<=3;i++)
{
    y+=x%10;
    x=x/10;
    
}
cout<<y;
}