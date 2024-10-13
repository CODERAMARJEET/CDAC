#include<stdio.h>
void main()
{
int arr1[]={1,2,3,4,5};
int arr2[]={6,7,8,9,10};
int sum[5];
for(int i=0;i<5;i++)
{
    sum[i]=arr1[i]+arr2[i];
    printf("%d",sum[i]);
}

}
