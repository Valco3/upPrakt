#include<iostream>
using namespace std;
int isPower(int n, int m);
int main()
{
    int n,m;
    cin>>n>>m;
    if(isPower(n,m)>-1)cout<<"YES "<<isPower(n,m);

}
int isPower(int n, int m)
{
    int sum=0;
    if(n==1)return 0;
    if(n%m==0)
    {
        do
        {
            n/=m;
            sum++;
        }while(n%m==0);
        if(n==1)return sum;
        else return -1;
    }
    else return -1;
}