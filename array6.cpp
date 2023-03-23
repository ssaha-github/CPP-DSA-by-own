//sum of array elements
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int size;
    int sum=0;
    cout<<"Enter array size :";
    cin>>size;
    cout<<"Enter array elemnts: ";
    
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }

    for(int n=0;n<size;n++)
    {
        sum=sum+a[n]; 
    }
    cout<<"Sum of elements is "<<sum;
}