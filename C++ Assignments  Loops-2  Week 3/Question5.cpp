#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a =n;
    int i = 0;
    int sum = 0;
    
    while (n>0)
    {
       if (n>0)
       {
        if ((n%10)%2==0)
        {
            sum = sum+(n%10);
        }
         n/=10;
        i++;
        
       }
    }
    if (a==0)
    {
        i = 1;
        sum = 0;
    }
    
    cout<<i<<" number of digit."<<endl;
   cout<<sum<<" is sum of  digit.";
}