#include <iostream>
using namespace std;

class Room
{
    int l;
    int b;
    int h;
public:
    void getdata()
    {
     cout<<"Enter length\n";
     cin>>l;
     cout<<"Enter breath\n";
     cin>>b;
     cout<<"Enter height\n";
     cin>>h;
    }
    void calc_area()
    {
      int a=2*l*b*h;
      cout<<a<<"is the area of room\n";
    }
    void calc_volume()
    {
        int v=l*b*h;
        cout<<v<<"is the volume of room\n";
    }

};
int main()
{
    Room s;
    s.getdata();
    s.calc_area();
    s.calc_volume();
}
