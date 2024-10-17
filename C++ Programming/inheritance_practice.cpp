// this is a demo program to practice inheritance
#include <iostream>
using namespace std;
class base
{
    int a,b;
    public:
    void accpt()
    {
        cout<<"Enter two no: \n";
        cin>>a>>b;

    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }

};
class derive:public base
{
    public:
   void print()
   {
       int x,y;
       x=geta();
       y=getb();
       cout<<"value of a and b"<<x<<" "<<y<<endl;
   }

};
int main()
{
    derive d;
    d.accpt();
    d.print();
    return 0;
};
