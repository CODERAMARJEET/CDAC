//Program in c++ to Define default argumenets to function which add 3 values.
#include<iostream>
using namespace std;

//defining the function before main so no prototype required
inline int add(int a=50,int b=30,int c=34) //passing default arguments
 {
     return a+b+c;
 }

int main()
{
 int a=1,b=2,c=3;

 int sum=add(a,b,c); //value of a,b,c will be 1,2,3
 cout<<sum<<"is the sum\n";

 sum=add();//as no arguments are passed it will take default arguments(50,30,34)
 cout<<sum<<"is the sum\n";

 return 0;
}




