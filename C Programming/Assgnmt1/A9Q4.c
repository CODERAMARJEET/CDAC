#include<stdio.h>
int main()
{
    int arr[4]={1,2,3,4}, *pl,s=6,c;
    pl=arr;
    int flag=0;
    for(int i=0;i<=3;i++)
    {
        if(arr[i] == s)
        {
          flag=1;

        }

    }
    if(flag==1)
         printf("Element found \n");
    else
         printf("Element not found \n");

    return 0;
}
