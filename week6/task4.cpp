#include<iostream>
using namespace std;
void play()
{
    int randomNum=rand()%10, moves=0, number;
    do
    {
        cout<<"What is your guess: ";
        cin>>number;
        if(randomNum==number)
        {
            cout<<"You win";
            break;
        }
        else if(randomNum>number)
        {
            cout<<"The number is higher"<<endl;
        }
        else 
        {
            cout<<"The number is lower"<<endl;
        }
        moves++;
    }while(moves<3);
}
int main()
{
    play();
}