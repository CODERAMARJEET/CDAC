#include<iostream>
using namespace std;
int main()
{
   int n1,sum;
   cout<<"Enter two numbers";
   cin>>n1;

   for (int i=1;i<=n1;i++)
   {
       sum+=i;
       cout<<i<<"+"<<i+1<<"="<<sum<<"\n";
   }

    return 0;
}
