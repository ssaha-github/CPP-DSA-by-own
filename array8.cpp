// Reverse array elements or SWAP
// method 1(own)
/*
#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,5,8,10};
    int n=6;
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    
}
*/
// Method 2 (Babbar)
#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
 int a[6]={1,2,3,4,5,6};
 int b[5]={5,4,3,2,1};

 reverse(a, 6);
 reverse(b,5);

 printarray(a,6);
 printarray(b,5);
}