/* 3 enter
ABC
BCD
CDE
*/
#include<iostream>
using namespace  std;
int main()

{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
       char ch='A';
       ch='A'+i-1;
        int j=1;
        while(j<=n)
        {
            char z=ch+j-1;
            cout<<z;
            j++;
        }
        cout<<endl;
        i++;
    }




} 
