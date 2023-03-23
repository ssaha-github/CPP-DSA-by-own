// alternate swap of array elements
#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};// it is applicable for odd size also
    int start=0;
    int end=5;
    int mid=start+1;
    while(start<=end,mid<=end){
        swap(a[start],a[mid]);
        start=start+2;
        mid=mid+2;
        }
        for(int i=0;i<6;i++){
            cout<<a[i];
        }
}
// you can do this by function calling also.. like array9.cpp  