// Binary search first
#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int element)
{
    int start=0;
    int end=size-1;
    int mid;
    mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        return -1;
    }
}
int main()
{
    int a[6]={2,4,6,8,10,18};
    int key;
    cout<<"Enter element to search for: ";
    cin>>key;

    int index=binarysearch(a,9,key);
    if(index==-1)
    {
        cout<<"Element not found";
    }
    else{
    cout<<"Index is "<<index;
    }

    return 0;

}