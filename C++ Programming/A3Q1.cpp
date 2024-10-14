//Program in c++ to count even and odd number in  2D array.
#include<iostream>
using namespace std;
int main()
{
    int arr[2][2];

    //accepting array
    cout<<"Enter elements of arrays\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }

    }

    //for printing the elements of arrray
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";

    }
return 0;
}
