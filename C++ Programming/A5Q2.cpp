//Write a program in c+++ to print the address of variable.
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &c=a;
    int b=20;
    int &d=b;
    int t;
    t=c;
    c=d;
    d=t;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
