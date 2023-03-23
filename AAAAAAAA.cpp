// Bubble sort basic
#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    int n=6;
    for(int i=1;i<n;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i;j++) // j<n-i because after getting 1st element we don't need to do comparison with that element  
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
            swapped=true;
            if(swapped!=true)
            cout<<"Continue"<<endl;
        }
        if(swapped==false){
        cout<<"broken";
        break;
        }
        
    }
    for(int z=0;z<n;z++)
    cout<<a[z]<<" ";
}
