//Print all array elements and array size determinaton
#include<iostream>
using namespace std;
void PAE(char arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    char a[5]={'A','B', 'C', 'D' , 'E'};
    int n=5;
    PAE(a,n);
    cout<<endl;

    char b[5]={'a','b', 'c', 'd' , 'e'};
    int p=5;
    PAE(b,p);
    int arraysizeofb=sizeof(b)/sizeof(char);// sizeof(char) here char means the size of one character
    cout<<" Size of this array is= "<<arraysizeofb;
    cout<<endl;

    int c[15]={2,3,4,5};
    int arraysizeofc=sizeof(c)/sizeof(int);// sizeof(int ) here int means the size of one integer i.e equal to 4.
    cout<<"Size of this array is= "<<arraysizeofc<<endl;
}