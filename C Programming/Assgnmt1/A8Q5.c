#include<stdio.h>
void main(){
int a=10,*pa,**x;
pa=&a;
x=&pa;
printf("Value of a using *pa %d\n",*pa);
printf("Value of a using a var %d\n",a);
printf("Value  of a using **x %d\n",**x);
printf("Address of a %d\n",pa);
printf("Value of pa %d\n",*x);
printf("Address of pa using &pa %d\n",&pa);
printf("Address of pa using x %d\n",x);
printf("Address of x %d",&x);
}
