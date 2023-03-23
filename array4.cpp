//Find max and min number in an array method 2
#include<iostream>
using namespace std;
int getmax(int num[], int n)
{
    int maxi= INT16_MIN;
    for(int i=0;i<n; i++)
    {
      maxi= max(maxi,num[i]);//max is pre defined function
    }
    return maxi;

}
int getmin(int num[], int n)
{
    int mini= INT16_MAX;//INT16_MAX is pre-defined function for finding max value
    for(int i=0;i<n; i++)
    {
      mini = min( mini, num[i]);//min is pre defined function
    }
    return mini;

}
int main()
{
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"Maximum value is :"<<getmax(num,size)<<endl;
    cout<<"Minimum value is :"<<getmin(num,size)<<endl;
    return 0;

}