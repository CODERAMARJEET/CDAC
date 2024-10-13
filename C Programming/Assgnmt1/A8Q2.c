#include<stdio.h>
void main(){
int a=10,*pa;
int b=20,*pb;
pa=&a;
pb=&b;
int temp;
temp=*pa;
*pa=*pb;
*pb=temp;
printf(" Value of a is %d\n",*pa);
printf(" Value of b is %d",*pb);
}
