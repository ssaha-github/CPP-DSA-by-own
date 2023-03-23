// Sorting of 0,1,2 in array
/*
#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    int i=0,j=n-2,k=n-1;
    while(i<j && i<k && j<k)
    {
        while(arr[i]==0 && i<j && i<k && j<k){
            i++;
        }
        while(arr[j]==1 && i<j && i<k && j<k){
            j++;
        }
        while(arr[k]==2 && i<j && i<k && j<k){
            k++;
        }
        if(arr[i]==1 && arr[j]==0 && i<j){ //1
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]==1 && arr[k]==0 && i<k){ //2
            swap(arr[i],arr[k]);
            i++;
            k--;
        }
        if(arr[i]==2 && arr[j]==0 && i<j){ //3
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]==2 && arr[k]==0 && i<k){ //4
            swap(arr[i],arr[k]);
            i++;
            k--;
        }
        if(arr[j]==0 && arr[k]==1 &&j<k){ //5
            swap(arr[j],arr[k]);
            j--;
            k--;
        }
        if(arr[i]==1 && arr[j]==2 && i<j){ //6
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[j]==2 &&arr[k]==1 &&j<k ){ //7
            swap(arr[j],arr[k]);
            j--;
            k--;
        }
        if(arr[j]==2 && arr[k]==0 &&j<k){ //8
            swap(arr[j],arr[k]);
            j--;
            k--;
        }
        if(arr[i]==2 && arr[k]==1 && i<k){ //9
            swap(arr[i],arr[k]);
            i++;
            k--;
        }
    }
}
void print(int arr[],int n)
{
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
 int a[8]={0,0,0,1,2,1,0,2};
 sort(a,8);
 print(a,8);
} 

// C++ program to sort an array
// with 0, 1 and 2 in a single pass
#include <bits/stdc++.h>
using namespace std;

// Function to sort the input array,
// the array is assumed
// to have values in {0, 1, 2}
void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	// Iterate till all the elements
	// are sorted
	while (mid <= hi) {
		switch (a[mid]) {

		// If the element is 0
		case 0:
			swap(a[lo++], a[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}
*/
// C++ program to sort an array
// with 0, 1 and 2 in a single pass
#include <bits/stdc++.h>
using namespace std;
  
// Function to sort the input array,
// the array is assumed
// to have values in {0, 1, 2}
void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
  
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
  
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
  
        // If the element is 1 .
        case 1:
            mid++;
            break;
  
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}
  
// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}
  
// Driver Code
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    sort012(arr, n);
  
    printArray(arr, n);
  
    return 0;
}
  
// This code is contributed by Shivi_Aggarwal