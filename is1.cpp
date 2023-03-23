// Insertion sort basic
#include<iostream>
using namespace std;
int main()
{
    int a[6]={10,1,7,6,14,9};
    int n=6;
    for(int i=1;i<n;i++) // for Rounds 
    {
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(a[j]>temp)
            a[j+1]=a[j]; // do shift
            else
            break;// no shift required

        }
        a[j+1]=temp;
    }
     for(int z=0;z<n;z++)
    cout<<a[z]<<" ";
}