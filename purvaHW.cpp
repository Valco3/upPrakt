#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int x,y,z;
int numberOfTiles;
cout<<"Wall sizes (x_y):"<<endl;
cin>>x>>y;
cout<<"Size of the tile:"<<endl;
cin>>z;
numberOfTiles=ceil((double)x/z)*ceil((double)y/z);
cout<<numberOfTiles;





}