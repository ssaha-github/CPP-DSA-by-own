#include<iostream>
using namespace std;
int main()
{  
    int l1,l2,l3,t1,t2,t3,t4;
    cout<<"Enter the marks :\n l1= ";
    cin>>l1;
    cout<<"l2= ";
    cin>>l2;
    cout<<"l3= ";
    cin>>l3;
    cout<<"t1= ";
    cin>>t1;
    cout<<"t2= ";
    cin>>t2;
    cout<<"t3= ";
    cin>>t3;
    cout<<"t4= ";
    cin>>t4;
    int l,t;
    l=((l1>=40)&&(l2>=40)&&(l3>=40));
    t=((t1>=40)||(t2>=40)||(t3>=40)||(t4>=40));
    if(l==1)
    {
        if(t==1)
        {
            cout<<"Passed";
        }
        else
        {
            cout<<"Failed";
        }
    }
    else
    {
        cout<<"Failed";
    }
}