#include<iostream>
using namespace std;

class base{

public:
    void show()
    {
        cout<<"In base \n";
    }
};

int main(){
base obj1, *p;

p=&obj1;
p->show();

return 0;

}
