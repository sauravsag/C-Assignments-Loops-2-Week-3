#include<iostream>
using namespace std;
int main(){
    int n = 0;
  
   while (n<=500)
   {
    int i = n;
      int sum = 0;
    while (i>0)
    {
        sum = sum+((i%10)*(i%10)*(i%10));
         i/=10;
   }
    if (sum==n)
    {
        cout<<n<<" is a angstrom mumber"<<endl;
    }
    n++;
}
}