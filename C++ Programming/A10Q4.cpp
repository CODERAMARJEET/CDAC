//program to overide a function
#include<iostream>
using namespace std;
class base
{

public:
    void print()
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
    derived d;
    d.print();
    return 0;
}
