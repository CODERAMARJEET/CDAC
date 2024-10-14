//Write a program in c+++ to print the address of variable.
#include<iostream>
using namespace std;
int main()
{
    int a=10,*b;
    b=&a;
    cout<<b<<"is the address of"<<*b<<endl;
    return 0;
}
