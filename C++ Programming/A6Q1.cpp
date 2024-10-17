#include<iostream>
using namespace std;
class Students
{
private:
    int rollno;
    char name[20];
    float avg;


public:
    void printdata()
    {

        cout<<"Roll No of Student is"<<rollno<<endl;
        cout<<"Name of Student is"<<name<<endl;
        cout<<"Average of Student is"<<avg<<endl;
    }
    void getdata();
};

void Students::getdata()
    {
        cout<<"Enter roll no,name,avg\n";
        cin>>rollno>>name>>avg;

    }
int main()
{
Students s1,s2,s3;
s1.getdata();
s1.printdata();
s2.getdata();
s2.printdata();
s3.getdata();
s3.printdata();
return 0;
}

