//to show inheritance using two classes
#include<iostream>
using namespace std;
class base
{
  int a;
  int b;
  public:
      void accept()
      {
        cout<<"Enter two numbers\n";
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
class calc:public base
{
    public:
    void cal()
    {
     int sum=geta()+getb();
     cout<<"sum is: "<<sum<<endl;
     int subs=geta()-getb();
     cout<<"subs is: "<<subs<<endl;
     int mul=geta()*getb();
     cout<<"Mul is: "<<mul<<endl;
     int div=geta()/getb();
     cout<<"Div is: "<<div<<endl;
    }
};
int main()
{
 calc s1;
 s1.accept();
 s1.cal();
 return 0;
};
