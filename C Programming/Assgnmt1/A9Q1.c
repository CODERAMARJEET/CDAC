/*Declare pointer array. Calculate sum of all elements*/
#include<stdio.h>
void main()
{
    int a[5]={10,20,30,40,50}, *pa;
    int sum=0;
    pa= &a;

    for(int i=0;i<5;i++){
        sum=sum+ *(pa+i);
}
  printf("the sum of array is:%d\n",sum);


}
