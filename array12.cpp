/*U have been given an integer arraylist(ARR) of size n is equal to [2M+1].
Now, in the given arraylist,'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the arraylist.
*/
#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    cout<<ans;
    //(optional) return ans;
    
}
int main()
{
    int a[7]={2,3,4,4,3,2,8};
    findUnique(a,7);
    
}
