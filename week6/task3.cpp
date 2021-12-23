#include<iostream>
using namespace std;
double reducedPrice(double price, double discount);
int main()
{
    double price, discount;
    cin>>price>>discount;
    cout<<reducedPrice(price, discount);
}
double reducedPrice(double price, double discount)
{
    return price-(discount/100)*price;
}