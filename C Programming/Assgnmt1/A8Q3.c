#include<stdio.h>
void main(){
float r=5.5,*pr;
pr=&r;
float area;
area=3.14* *pr * *pr;
printf("%f",area);
}
