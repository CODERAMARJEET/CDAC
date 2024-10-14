//Program in c++ to define character of array of 10,print array using for each loop
#include<iostream>
using namespace std;
int main()
{
    char arr[10];

    //accepting array
    cout<<"Enter elements of arrays\n";
    for(int i=0;i<10;i++)
    {
     cin>>arr[i];
    }

    //for printing the elements of array using for each loop
     for(char i:arr)
    {
     cout<<i;
    }
return 0;
}
