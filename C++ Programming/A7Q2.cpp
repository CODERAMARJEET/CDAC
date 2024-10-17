//c++ program to show construction overloading
#include <iostream>
using namespace std;
class student
{
int rollno;
char name;
public:
student()
{
   rollno=10;
   name='a';
   cout<<"first construct\n";
}
student(int x,char y)
{
    rollno=x;
    name=y;
    cout<<"Overloaded function with value: "<<x<<y<<endl;
}

void disp()
{
    cout<<"disp function call\n";
    cout<<rollno<<" :is the roll no\n";
    cout<<name<<" :is the name\n";
}
};
int main()
{
    student s1;
    student s2(30,'c');
    s1.disp();
    s2.disp();
    return 0;
}
