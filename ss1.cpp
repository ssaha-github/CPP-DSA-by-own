//Selection sorting ...Lecture 16
#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,4,3,5,1};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++) // we can wright j=i also ,, but can't write j=0
        {
         if(a[min]>a[j])
          min=j;
        
        }
        swap(a[min],a[i]);
    }
   for(int z=0;z<n;z++)  
    cout<<a[z];
   
}