//Asignment1 on operator overloading
#include <iostream>
using namespace std;

class x
{
    int a,b;
public:
    void get();
    void print();
    x operator +(x);
    x operator -(x);
};
void x::get()
{
    cout<<"Enter value of a: \n";
    cin>>a;
    cout<<"Enter value of b: \n";
    cin>>b;
}
x x:: operator+(x o2)
{
    x obj;
    obj.a=a+o2.a;
    obj.b=b+o2.b;
    return obj;

}
x x:: operator-(x o2)
{
    x obj;
    obj.a=a-o2.a;
    obj.b=b-o2.b;
    return obj;

}
void x :: print()
{
   cout<<a;
   cout<<b;
}
int main()
{
 x o1,o2,o3,o4;
 o1.get();
 o2.get();
 o3=o1+o2;
 o4=o1-o2;
 o3.print();
 o4.print();
}
