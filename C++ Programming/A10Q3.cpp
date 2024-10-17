//Asignment1 on operator overloading using pre increment and decrement
#include <iostream>
using namespace std;

class x
{
    int a;
public:
    void get();
    void print();
    void operator ++();
     void operator --();
};
void x::get()
{
    cout<<"Enter value of a: \n";
    cin>>a;
}
void x:: operator++()
{

    a++;


}
void x:: operator--()
{

    a--;


}
void x :: print()
{
   cout<<a;
}
int main()
{
 x o1;
 o1.get();
 ++o1;
 o1.print();
 --o1;
 o1.print();
}
