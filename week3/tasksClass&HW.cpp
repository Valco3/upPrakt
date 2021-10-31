#include<iostream>
#include<cmath>
#include<initializer_list>
#include <algorithm>
using namespace std;
int main()
{
    //task 2
    // char symbol;
    // cin>>symbol;
    // bool isNumber=(symbol>='0'&& symbol<='9')? true:false;
    // cout<<isNumber;
    // return 0;

    //task3
    // int year;
    // cin>>year;
    // bool isVis=(year%4==0&&year%100!=0)? true:false;
    //cout<<isVis;

    //task 4
    // int a,b,c;
    // cin>>a>>b>>c;
    // bool doesExist;
    // if((a+b>c)&&(a+c>b)&&(b+c>a))doesExist=true;
    // else doesExist=false;
    // cout<<doesExist;

    //task5
    //а)
    // int x;
    // cin>>x;
    // bool isTrue=((x%4==0)||(x%7==0))? true:false;
    // cout<<isTrue;
    // return 0;

    //б)
    // int a,b,c;
    // cin>>a,b,c;
    // int d=b*b-4*a*c;
    // bool noRoot=(d<0)? false:true;
    // cout<<noRoot;
    // return 0;

    //в)
    // int a,b;
    // cin>>a>>b;
    // bool isIn(pow(a-0,2)+pow(b-1,2)<5*5)? true:false;
    // cout<<isIn;

    //г)
    // int a,b,ac,bc,f;
    // cin>>a>>b>>ac>>bc>>f;
    // bool isIn(pow(a-ac,2)+pow(b-bc,2)<f*f);
    // cout<<isIn;

    //д)
    // int a,b;
    // cin>>a>>b;
    // bool isIn=((a*a+b*b<5*5)&&(a<=0&&b<=0))? true:false;
    // cout<<isIn;

    //е)
    // int a,b;
    // cin>>a>>b;
    // bool isIn=((a*a+b*b<10*10)&&(a*a+b*b>5*5))? true:false;
    // cout<<isIn;

    //ж)
    // int x;
    // cin>>x;
    // bool itBelongs=(x>=0&&x<=1)? true:false;
    // cout<<itBelongs;

    //з)
    // int x,a,b,c;
    // cout<<"Input the values in the following order a-b-c-x"<<endl;
    // cin>>a>>b>>c>>x;
    // //cout<<max({a,b,c})<<endl;
    // bool isMax=(x==max({a,b,c}))? true:false;
    // cout<<isMax;

    //и)
    // int x,a,b,c;
    // cout<<"Input the values in the following order a-b-c-x"<<endl;
    // cin>>a>>b>>c>>x;
    // int y=max({a,b,c});
    // bool isMax=((x>y)||(x<y))? true:false;
    // cout<<isMax;

    //к)
    // bool x,y;
    // cout<<"Input values for x and y booleans"<<endl;
    // cin>>x>>y;
    // bool minOneTrue=((x&&y>0)||(x||y>0))? true:false;
    // cout<<minOneTrue;

    //л)
    // bool x,y;
    // cout<<"Input values for x and y booleans"<<endl;
    // cin>>x>>y;
    // bool minOneTrue=(x&&y>0)? true:false;
    // cout<<minOneTrue;

    //м)
    // int a,b,c;
    // cin>>a>>b>>c;
    // bool allMin=(max({a,b,c})<0)? true:false;
    // cout<<allMin;

    //н)
    // int a;
    // cout<<"Input a 3 digit positive number"<<endl;
    // cin>>a;
    // bool divides;
    // while(a>0)
    // {
    //     if(a%10==7)divides=true;
    //     a/=10;
    // }
    // bool isTrue=(divides)? true:false;
    // cout<<isTrue;

    //о)
    // int a;
    // cout<<"Input a 3 digit natural number"<<endl;
    // cin>>a;
    // int b,c,d;
    // b=(a/100)%10;
    // c=(a/10)%10;
    // d=a%10;
    // bool areDifferent=((b-d!=0)&&(b-c!=0)&&(d-c!=0))? true:false;
    // cout<<areDifferent;

    //п)
    // int a;
    // cout<<"Input a 3 digit natural number"<<endl;
    // cin>>a;
    // int b,c,d;
    // b=(a/100)%10;
    // c=(a/10)%10;
    // d=a%10;
    // bool twoAreEqual=((b==c)||(b==d)||(c==d))? true:false;
    // cout<<twoAreEqual;
}
//SWITCH + тернарен
// Task 1
// По даден месец и година изведете броя дни от месеца.

// Task 2
// Дадено е едно число. Ако е цифра, изведете броя кръгчета в него. Ако не е - изведете грешка.

// Дадено е едно число. Ако е цифра, изведете наименованието ѝ на Английски. Ако не е - изведете грешка.

// Task 3
// По дадена година проверете дали тя е високосна.

// Task 4
// По дадени три цели числа определете дали съществува триъгълник с такива страни.

// //Ternary
// Task 5. Да се запише булев израз, който да има стойност истина, ако посоченото условие е вярно и стойност - лъжа, ако условието не е вярно: 
// а) цялото число p се дели на 4 или на 7;

// б) уравнението a.x2 + b.x + c = 0 (a ≠ 0) няма реални корени;

// в) точка с координати (a, b) лежи във вътрешността на кръг с радиус 5 и център (0, 1).

// г) точка с координати (a, b) лежи извън кръга с център (c, d) и радиус f;

// д) точка принадлежи на частта от кръга с център (0, 0) и радиус 5 в трети квадрант;

// е) точка принадлежи на венеца с център (0, 0) и радиуси 5 и 10;

// ж) x принадлежи на отсечката [0, 1];

// з) x = max{a, b, c}

// и) x != max{a, b, c} (операцията ! да не се използва);

// к) поне една от булевите променливи x и y има стойност true;

// л) и двете булеви променливи x и y имат стойност true;

// м) нито едно от числата a, b и c е положително;

// н) цифрата 7 влиза в записа на положителното трицифрено число p;

// о) цифрите на трицифреното число m са различни;

// п) поне две от цифрите на трицифреното число m са равни помежду си.
