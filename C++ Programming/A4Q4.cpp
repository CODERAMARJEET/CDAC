//Program in c++ to calculate area of circle and rectangle using function overloading.
#include<iostream>
using namespace std;

void area(int r)
{
    cout<<3*r*r<<"is the area of circle\n";

}
void area (int l,int b)
{
    cout<<l*b<<"is the area of rectangle\n";
}


int main()
{
    int r=2,l=10,b=20;
    area(r);
    area(l,b);
    return 0;
}

