#include<iostream>
using namespace std;
bool isPowerOfTwo(int n);
int main()
{
    int n;
    cin>>n;
    cout<<boolalpha<<isPowerOfTwo(n);

}
bool isPowerOfTwo(int n)
{
    if(n==1)return true;
    if(n%2==0)
    {
        do
        {
            n/=2;
        }while(n%2==0);
        if(n==1)return true;
        else return false;
    }
    else return false;
}