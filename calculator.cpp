#include<iostream>
using namespace std;
int main()
{
    int a,b,ch,add,sub,multi;
    float div;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter choice number: ";
    cin>>ch;
    if(ch==1)
    {
        add=a+b;
        cout<<add;
    
    }
else if (ch==2)
{
    sub=a-b;
    cout<<sub;
    /* code */
}
else if (ch==3)
{multi=a*b;
cout<<multi;
    /* code */
}
else if (ch==4)
{div=a/b;
cout<<div;
    /* code */
}
else 
{
    cout<<"invalid task";

}
return 0;

}