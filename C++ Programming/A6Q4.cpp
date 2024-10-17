#include <iostream>
#include <string.h>
using namespace std;

class Bact
{
    char name[20];
    int accountno;
    char accountType[30];
    int balance;
    int n;
public:
    void assignValues()
    {
      cout<<"Enter customer name\n";
      cin>>name;
      cout<<"Enter Account number\n";
      cin>>accountno;
      cout<<"Enter Account Type\n";
      cin>>accountType;
      cout<<"Enter Current Balance\n";
      cin>>balance;
    }
    void depositAmount()
    {
        cout<<"Enter the amount you want to deposit\n";
        cin>>n;
        balance+=n;
    }
    void withdrawAmount()
    {
       cout<<"Enter the amount you want to withdraw\n";
        cin>>n;
        balance-=n;
    }
    void disp()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<accountno<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    Bact b1[5];
    for(int i=0;i<5;i++)
    {
        b1[i].assignValues();
        b1[i].depositAmount();
        b1[i].withdrawAmount();
        b1[i].disp();
    }

    return 0;
}
