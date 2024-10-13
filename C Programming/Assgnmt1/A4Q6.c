#include<stdio.h>
void main()
{
    int sum=0;
    int max=0;
    int min=9;
int arr[]={1,2,3,4,5,6};
for(int i=0;i<6;i++)
{
   if(arr[i]>max)
    max=arr[i];
   if(arr[i]<min)
    min=arr[i];

}
printf("Maximun is %d\n",max);
printf("Minimum is %d",min);

}
