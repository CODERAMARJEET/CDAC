#include<stdio.h>
void main()
{
int a[]={1,4,3,5,2};
int t;
for(int i=0;i<=3;i++)
{
    for(int j=i+1;j<=4; j++)
    {
        if (a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
for(int i=0;i<5;i++)

{
    printf("%d",a[i]);
}
}
