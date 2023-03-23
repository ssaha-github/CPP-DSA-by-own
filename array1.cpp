//Basic initialization and declration of array
#include<iostream>
using namespace std;
int main()
{
    int num[5]={1,3,7,11,2};
    cout<<num[3]<<endl;//output=11

    int a[10000]={0};//output=0 for all 10000 elements
    cout<<a[99]<<endl;
   
    int b[10000]={1}; 
    cout<<b[0]<<endl;//output=1 only for 0th element
    cout<<b[5]<<endl;//default output=0

    int c[15]={2,6};
    cout<<c[1]<<endl;
    cout<<c[5]<<endl;//output will be 0(by default)

    char d[5]={'A', 'b', 'R', 'E', 'y'};
    cout<<d[3];//output= E
}