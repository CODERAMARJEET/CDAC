//Program in c++ todeclare 2D array of size 3*3.Find smallest element of array
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
     int min=arr[0][0];

    //for printing the elements of arrray
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(arr[i][j]<min)
                min=arr[i][j];
        }

    }
     cout<<min<<"is the minimum";

return 0;
}
