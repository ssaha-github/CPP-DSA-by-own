/* 3 enter
1 
2 3 
4 5 6 
*/
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int row=1;
   int count=1;
   while(row<=n)
   {
 
int column=1;
   
   while (column<=row)

   {
   
    cout<<count<<" ";
    column=column+1;
count=count+1;
   }
   cout<<endl;
   row=row+1;
   }
   

}