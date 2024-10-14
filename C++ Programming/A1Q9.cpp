#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double p,r,t,ci;
    cout<<"Enter the Principal,Rate and Time\n";
    cin>>p>>r>>t;
    ci=p*((pow((1+r/100),t)))*p;
    cout<<ci<<" :is the compopund intrest\n";
    return 0;
}
