#include<iostream>
using namespace  std;
int dummy(int n)
{
    n++;
    int b=3*n;

    return b;//if i write returrn 0 here then the answer of this function will be 0 also
}
int main()
{
    int n;
    cin>>n;
    dummy(n);
    cout<<dummy(n);

}
