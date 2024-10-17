#include<iostream>
using namespace std;
class c2;
class c1
{
    int a=10;
    friend void add(c1,c2);
    friend void subs(c1,c2);
    friend void mul(c1,c2);
    friend void div(c1,c2);
};
class c2
{
    int b=20;
    friend void add(c1,c2);
    friend void subs(c1,c2);
    friend void mul(c1,c2);
    friend void div(c1,c2);
};
void add(c1 x,c2 y)
{
    int sum=x.a+y.b;
    cout<<"Sum is"<<sum<<endl;
}
void subs(c1 x,c2 y)
{
    int sub=x.a-y.b;
    cout<<"Substraction is"<<sub<<endl;
}
void mul(c1 x,c2 y)
{
    int m=x.a*y.b;
    cout<<"Multiplication is"<<m<<endl;
}
void div(c1 x,c2 y)
{
    int d=x.a/y.b;
    cout<<"Division is"<<d<<endl;
}
int main()
{
    c1 x;
    c2 y;
    add(x,y);
    subs(x,y);
    mul(x,y);
    div(x,y);
    return 0;

}
