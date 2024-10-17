//overloading function for substraction of two objects.
#include<iostream>
using namespace std;
class x
{
    int a,b,c;
public:
    void get();
    void print();
    x operator -(x);
};
void x :: get()
{
    cout<<"ENter value\n";
    cin>>a>>b>>c;

}
void x:: print()
{
    cout<<"the result is"<<a<<" "<<b<<" "<<c<<endl;
}

x x::operator-(x obj1)
{
    x obj2;
    obj2.a = a - obj1.a;
    obj2.b = b - obj1.b;
    obj2.c = c - obj1.c;
    return obj2;
}
int main()
{
    x o1,o2,o3;
    o1.get();
    o2.get();
    o3=o1-o2;
    o3.print();
}
