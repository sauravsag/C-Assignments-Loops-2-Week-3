#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a =n;
   
    int reverse = 0;
    
    while (n>0)
    {
       if (n>0)
       {
        reverse = (reverse*10)+(n%10);
         n/=10;
       }
    }
    if (a==0)
    {
        reverse = 0;
    }
    
   cout<<reverse<<" is reverse of given number."<<endl;
   cout<<"sum of given number and it's reverse = "<<reverse+a;
}