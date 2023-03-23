#include<iostream>
using namespace  std;
int main()

{
    int c;
    cout<<"Enter limit: ";
    cin>>c;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=c; ++i)
    {
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
        
    }
} 
