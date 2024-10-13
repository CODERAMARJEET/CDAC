#include<stdio.h>
void main(){
int a=10,*pa;
pa=&a;
printf("Before Pointer Increment %d\n",pa);
pa++;
printf("After Pointer Increment %d",pa);
}
