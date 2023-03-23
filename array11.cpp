// Alternative of swap 
#include<iostream>
using namespace std;
int main()
{
     int a[2]={1,2};
     int temp=a[0];
     a[0]= a[1];
     a[1]= temp;
     for(int i=0;i<2;i++){
        cout<<a[i];

     }
}