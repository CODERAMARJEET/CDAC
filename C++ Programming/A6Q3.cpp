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

      strcpy(name,"Amarjeet");
      accountno=12345;
      strcpy(accountType,"Savings");
      balance=90000;
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
    Bact b1;
    b1.assignValues();
    b1.depositAmount();
    b1.withdrawAmount();
    b1.disp();
    return 0;
}
