//Program in c++ to Define inline functions to calculate additions and substraction of 2 no's.
#include<iostream>
using namespace std;

//prototype declaration
int add(int,int);
int subs(int,int);
int main()
{

    int a=10,b=20;
    int sum=add(a,b);
    int sub=subs(a,b);
    cout<<"Sum is"<<sum<<endl;
    cout<<"Substract is"<<sub<<endl;

return 0;
}

inline add(int x,int y)
{
    return x+y;
}

inline subs(int x,int y)
{
    return x-y;
}
