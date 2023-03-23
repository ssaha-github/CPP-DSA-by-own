/*
#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}
*/

#include<iostream>
using namespace std;
int firstocc(int arr[], int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    
    while(start<=end)
    {
       if(arr[mid]==key)
       {
        ans=mid;
        end=mid-1;
        
       }
       else if(arr[mid]<key)
       {
        start=mid+1;
       }
       else if(arr[mid]>key)
       {
        end=mid-1;
        
       }
       mid=start+(end-start)/2;
    }

    return ans;
}
int lastocc(int arr[], int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
       if(arr[mid]==key)
       {
        ans=mid;
        start=mid+1;
       }
       else if(arr[mid]<key)
       {
        start=mid+1;
       }
       else if(arr[mid]>key)
       {
        end=mid-1;
       }
       mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int a[7]={1,2,3,3,3,3,4};

    firstocc(a,7,3);
    lastocc(a,7,3);
    cout<<"First occurance of element 3 is at index: "<<firstocc(a,7,3)<<endl;// 3 is the key element to be searched
    cout<<"Last occurance of element 3 is at index: "<<lastocc(a,7,3);

}