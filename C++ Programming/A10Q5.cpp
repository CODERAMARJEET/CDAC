//program to overide a vitual function
#include<iostream>
using namespace std;
class base
{

public:
    virtual void print()
    {
        cout<<"parent class"<<endl;
    }

};
class derived:public base
{
   public:
    void print()
    {
        cout<<"derive class"<<endl;
    }
};
int main()
{
    base a,*ptr;
    ptr=&a;
    ptr->print();
    return 0;
}
