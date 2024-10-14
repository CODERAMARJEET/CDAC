#include<iostream>
using namespace std;
int main()
{
    int bs,al,gs;
    cout<<"Enter Base Salary\n";
    cin>>bs;
    if(bs<20000)
        al=0.2*bs;
    if(bs>20000&&bs<50000)
        al=0.3*bs;
    if(bs>50000)
        al=0.35*bs;
    gs=bs+al;
    cout<<al<<"\n";
    cout<<gs<<" : is Gross";
    return 0;
}
