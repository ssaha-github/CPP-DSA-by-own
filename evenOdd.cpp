#include<iostream>
using namespace std;
//1=even   0=odd
bool isEven(int a)
{
    if(a&1)
    {
        return 0;//this will return to else block of main fn

    }
    else{
        return 1;//this will return to if block of main fn
    }
}
int main()
{
    int num;
    cin>>num;
    if(isEven(num))
    {
        cout<<"Number is even"<<endl;

    }
    else{
        cout<<"Number is odd"<<endl;
    }
    return 0;
}