//simple c++ program to show constructor working
#include <iostream>
using namespace std;
class student
{
int rollno;
char name;
public:
student()
{
    cout<<"Enter your roll no: ";
    cin>>rollno;
    cout<<"Enter your name: ";
    cin>>name;
}
void disp()
{
    cout<<rollno<<" :is the roll no\n";
    cout<<name<<" :is the name\n";
}
};
int main()
{
    student s1;
    s1.disp();
    //s1.student();
    return 0;
}
