#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter of term = ";
    cin>>n;
    int a,b;
    a=1 ;b=1;
    int sum;
    cout<<"1st term = "<<a<<endl<<"2nd term = "<<b<<endl;
    for (int i = 3; i <= n; i++)
    {
        sum = a+b;
        cout<<i<<"th term = "<<sum<<endl;
        a=b;
        b=sum;
    }
}