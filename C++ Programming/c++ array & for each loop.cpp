#include<iostream>
using namespace std;

int main()
{

    int a[5],ec=0,oc=0,i;

    cout<<"enter the array";
    for(i=0;i<10;i++)
        cin>>a[i];
    for (int j:a)
    {

        if(j%2==0)
            ec++;
        else
            oc++;
        cout<<j<<"\t";

    }
    cout<<"\neven count"<<ec;
    cout<<"\nodd count"<<oc;

    return 0;
}
