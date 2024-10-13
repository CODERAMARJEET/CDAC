#include<stdio.h>
int read()
 {
     int n;
     printf("Enter marks of a Subject\n");
     scanf("%d",&n);
     return n;
 }
 int tot(int a,int b,int c)
 {
     int sum;
     sum=a+b+c;
     return sum;
 }
 int avg(int s)
 {
     int avg;
     avg=s/3;
     return avg;
 }
 void disp(int s,int a)
 {
 printf("Sum is %d \n",s);
 printf("Average is %d \n",a);
 }
void main()
{
    int m1,m2,m3,s,a;
    m1= read();
    m2= read();
    m3= read();
    s= tot(m1,m2,m3);
    a=avg(s);
    disp(s,a);
}

