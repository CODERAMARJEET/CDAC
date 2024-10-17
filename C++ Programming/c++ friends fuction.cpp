#include <iostream>
using namespace std;

class no{
    int a,b;

public:
    void getdata(){
        cout<<"enter nos.";
        cin>>a>>b;
    }
    friend void add(no); //Prototype
};
void add (no n1)
{

    int s=n1.a+n1.b;
    cout<<"sum is"<<s;
}

int main()
{
    no n1;//creating object of class as n1
    n1.getdata();
    add(n1);//passing objects of class no to add function

    return 0;
}
