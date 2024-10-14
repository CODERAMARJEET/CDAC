#include<iostream>
using namespace std;
int a=10;//global var
int main()
{
    int a=20;//local var
    cout<<a<<" "<<"Is local Variable\n";
    cout<<::a<<" "<<"Is Gloabal Variable\n";

}
