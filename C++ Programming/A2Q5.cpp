#include<iostream>
using namespace std;
int main()
{
   int n1,n2,sum;
   cout<<"Enter two numbers";
   cin>>n1>>n2;

   for (int i=n1;i<=n2;i++)
   {
       sum+=i;
   }
   cout<<"sum is:"<<sum;
    return 0;
}
