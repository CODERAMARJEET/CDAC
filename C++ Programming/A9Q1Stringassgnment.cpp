//program to impliment len function of string class
#include <iostream>
#include <string>
using namespace std;
    int main()
    {
        string name="Amarjeet Kumar";
        int l;
        string a,f;
        l=name.length();
        cout<<l<<endl;
        name.replace(9,5,"Singh");
        cout<<name<<endl;
        a=name.append("Kumar");
        cout<<a<<endl;
        cout<<name.find('a');
        return 0;
    }
