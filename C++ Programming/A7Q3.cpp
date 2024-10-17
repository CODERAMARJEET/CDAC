//c++ program to show copy constructor
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
//copy constructor begins
student(student &stud)
{
   rollno=stud.rollno;
    name=stud.name;
    cout<<"I am copying from s1\n";
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
    student s1,s2(s1);
    s1.disp();
    s2.disp();
    //s1.student();
    //cout<<"Enter your roll no: ";
    //cin>>rollno;
    //cout<<"Enter your name: ";
    //cin>>name;
    return 0;
}
