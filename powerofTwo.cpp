/* Own slove (But value should be taken in int)
#include<iostream>
using namespace std;
int main()
{
    float num;
    cout<<"Enter number: ";
    cin>>num;
    while(num>1){
        num=num/2;
    }
    if(num==1)
    {
        cout<<"Can be represented as the power of two";
    }
    else{
        cout<<"Cannot be represented as the power of two";

    }
    return 0;
}
*/

// Babbar's brutforce approach 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0;i<=30;i++)
    {
        int ans=pow(2,i);
        if(ans==n)
        {
             cout<<"Can be represented as the power of two";
        }

    }

}