#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age :";
    cin>>age;
    char mar;
    char gen;
    cout<<"Enter marital status and gender- y for married,u for unmarried, m for male, f for female: ";
    cin>>mar>>gen;
    
    if(mar=='y')
     cout<<"Insurance issued"; 
     
     else{
      if(gen=='m'){
         if(age>30)
           cout<<"Insurance issued";
           else 
             cout<<"Insurance not issued";  
      }
      else {
        if(age>25)
           cout<<"Insurance issued";
           else
            cout<<"Insurance not issued";
      }
     }
 return 0;   
}