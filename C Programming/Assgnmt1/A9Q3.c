/*sort the array using pointer*/
#include<stdio.h>
void main()
{
    int arr[4]={5,4,34,23}, *pl;
    pl=arr;
    int temp;
    for(int i=0;i<=2;i++)
    {

        for(int j=i+1;j<=3;j++)
        {

            if(pl[i]>pl[j])
               {
                temp=pl[i];
                pl[i]=pl[j];
                pl[j]=temp;
                }

        }
    }
    for(int i=0;i<4;i++)
    {
        printf("%d\n",pl[i]);
    }

}
