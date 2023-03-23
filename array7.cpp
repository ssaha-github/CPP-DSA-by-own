//Check if a number is present in the array or not
/* Babbar's not understandable method...
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if( found ) {
        cout <<" Key is present "<< endl;
    }
    else{
        cout <<" Key is absent " << endl;
    }

    return 0;
}
*/

#include<iostream>
using namespace std;
void find(int ar[], int n, int m)
{
    int c;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==m)
        {
           c=1;
        }
    }
    if(c==1)
    {
        cout<<"Element is present..";
    }
    else{
        cout<<"Element is not present..";
    }
}
int main()
{
    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;
    
    find(arr,10,key);

}