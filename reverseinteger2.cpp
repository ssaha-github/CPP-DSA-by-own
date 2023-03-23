//Riverse integer with no constraint error
#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    cout<<"Enter your number: ";
    int a;
    cin>>a;
    while(a>0)
    {
        int digit=a%10;
        if(ans>INT16_MAX/10)
        {
            cout<<"Answer is 0";
            return 0;
        }
        if(ans<INT16_MIN/10)
        {
            cout<<"Answer is 0";
            return 0;
        }
        ans=ans*10+digit;
        a=a/10;
    }
    cout<<"Answer is: "<<ans;
}