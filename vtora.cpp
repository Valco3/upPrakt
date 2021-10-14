#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int x1,x2,y1,y2;
 cout<<"koordinati na purva tochka:"<<endl;
 cout<<"x1:";
 cin>>x1;
 cout<<"y1:";
 cin>>y1;
cout<<"koordinati na vtora tochka:"<<endl;
 cout<<"x2:";
 cin>>x2;
 cout<<"y2:";
 cin>>y2;
 cout<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}