#include<iostream>
#include<random>
using namespace std;
int main()
{
    int min=1,max=100;//defining the range
    random_device r;//creating a object
    mt19937 g(r());//creating a seed
    uniform_int_distribution<> distrib(min,max);
    int x=distrib(g),n;//assining a random number 
    cout<<"Guess the number!!"<<endl;
    do{
        cout<<"Enter a number betweem 1 to 100:";
        cin>>n;
        if(n<x)
            cout<<"The number is higher"<<endl;
        else if(n>x)
            cout<<"The number is lower"<<endl;
        else
            cout<<"You WON!!";
    }while(n!=x);//so the code runs until user guess the correct value
    return 0;
}