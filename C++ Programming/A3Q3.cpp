//Program in c++ to integer array of 10.Print array elements using for each.
#include<iostream>
using namespace std;
int main()
{
    int arr[10];

    //accepting array
    cout<<"Enter elements of arrays\n";
    for(int i=0;i<10;i++)
    {
     cin>>arr[i];
    }

    //for printing the elements of array using for each loop
     for(int i:arr)
    {
     cout<<i;
    }
return 0;
}
