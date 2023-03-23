//reverse integer with size constraint error
#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int a=1234;
    while(a>0)
    {
        int digit=a%10;
        ans=ans*10+digit;
        a=a/10;
    }
    cout<<"Answer is :"<<ans;
}