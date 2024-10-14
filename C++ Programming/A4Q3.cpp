//Program in c++ to write add function using function overloading to calculate average of 3 integers,2 floats.
#include<iostream>
using namespace std;

 int avg(int a,int b,int c)
 {
     int s=a+b+c;
     return s/3;
 }
double avg(double a,double b)
 {
    double s=a+b;
     return s/3.0;
 }
int main()
{
    int a=20,b=10,c=30;
 int a1=avg(a,b,c);
 double b1=avg(2.2,3.3);
cout<<a1<<"is average of integer\n";
cout<<b1<<"is average of double\n";
 return 0;
}




