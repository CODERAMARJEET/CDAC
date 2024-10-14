#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"Enter Principle,Rate and Time\n";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"Simple Interest is: "<<si;
    return 0;
}
