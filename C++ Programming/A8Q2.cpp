#include <iostream>
#include <string.h>
using namespace std;
class base
{
int rollno;
string name;
   public:
void accept()
{
    cout<<"Accept roll no: "<<endl;
    cin>>rollno;
    cout<<"Accept Name: "<<endl;
    cin>>name;

}

        int getrno()
        {
            return rollno;

        }
        string getname()
        {
            return name;
        }

};
class mech:public base
{
    public:
    void pta()
    {
        int m1,m2,r;
        string n;
        r=getrno();
        n=getname();
        cout<<"Enter marks of 2 subject\n";
        cin>>m1>>m2;
        int sum,avg;
        sum=m1+m2;
        avg=sum/2;
        cout<<"Total marks of "<<n<<" is "<<sum<<endl;
        cout<<"Total average of "<<n<<" is "<<avg<<endl;
    }



};
/*class entc
{

};
class comp
{

};*/
int main()
{
    mech m;
    m.accept();
    m.pta();
    return 0;
};
