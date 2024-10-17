#include <iostream>
using namespace std;
class Circle
{
    int r;
public:
    void getdata()
    {
      cout<<"Enter the radius of circle\n";
      cin>>r;
    }
    void area()
    {
        float a=3.14*r*r;
        cout<<"Area of circle is: "<<a<<endl;
    }
    void circumference()
    {
        float c=2*3.14*r;
        cout<<"Circumferance of circle is: "<<c<<endl;
    }

};
int main()
{
    Circle f;
    f.getdata();
    f.area();
    f.circumference();
    return 0;
}
