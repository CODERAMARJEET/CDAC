#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    int gcd=1;
    cin>>n1>>n2;
    for(int i=2;i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
           gcd=i;
           break;
        }
    }
    cout<<gcd;

    return 0;
}
