//assignment on uniary operator overloading
#include <iostream>
using namespace std;
class no
{
    int a;
    public:
    void get();
    void print();
    no operator -();
};
void no:: get()
{

    cout<<"Enter a number\n";
    cin>>a;
}
void no:: print()
{
    cout<<a;
}
no no::operator-()
{
    a=-a;
}
int main()
{
    no o1;
    o1.get();
    -o1;
    o1.print();
    return 0;
}
