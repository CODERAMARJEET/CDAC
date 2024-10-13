#include<stdio.h>
void main()
{
int a[]={1,2,3,4,5};
int b[]={6,7,8,9,10};
int c[10];
int i;
for( i=0;i<=4;i++)
{
    c[i]=a[i];
}
for(int j=0;j<=4;i++,j++)
{
    c[i]=b[j];
}
for(int i=0;i<10;i++)
{
    printf("%d",c[i]);
}
}
