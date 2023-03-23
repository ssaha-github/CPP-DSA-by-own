//conecpt of updation of array elements in main array from declared function
#include<iostream>
using namespace std;
void update(int arr[], int size)
{
    arr[0]=120;//As arr[] is the adress of array of main functon.. If i update any element in this declared function it will be updated in the main function also
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int a[3]={3,2,1};
    update(a,3);
     for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
}