#include <iostream>
using namespace std;

class number{

private:
    int a,b, sum;

public:
    void getNo()
    {

        cout <<"enter no.s";
        cin>>a>>b;
    }
    void number:: add()
    {

    sum=a+b;
    cout <<"addition is"<<sum<<endl;
    }

    int main(){
    number n1;
    n1.getNo();
    n1.add();


    return 0;

    }
