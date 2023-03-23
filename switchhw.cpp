#include<iostream>
using namespace  std;
int main()
{
    int a;
    cin>>a;
    int h;
    h=a/100;
    switch(h)
    {

        
        default:cout<<"100 rupees required: "<<h<<endl;
        break;

    }
    int b;
    b=a-(h*100);
    int f;
    f=b/50; 
    switch(f)
    {
        
        default:cout<<"50 rupees required: "<<f<<endl;
        break; 
    }
    int c;
    c=b-(f*50);
    int t;
    t=c/20;
    switch(t)
    {
        
        default:cout<<"20 rupees required: "<<t<<endl;
        break; 

    }
    int d;
    d=c-(t*20);
    switch(d)
    {
        
        default:cout<<"1 rupees required: "<<d<<endl;
        break;
    }
    

   

    
} 
