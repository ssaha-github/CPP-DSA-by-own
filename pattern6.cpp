/* 3 enter
1
22
333
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
       int count=i;
        int j=1;
        
        while(j<=i)
        {
            
            cout<<count;
            
            j++;
        }
        count=i-1;
        cout<<endl;
        i++;
    }


} 
