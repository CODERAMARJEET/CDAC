#include<stdio.h>
void main()
{
int a[5],s,i;
printf("Enter array\n");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    s=sum(a);
    print(s);
    return 0;
}
int sum(int pa[])
{
    int i,s=0;
    for(i=0;i<5;i++)
        s=s+pa[i];
    return s;
}
void print(int a)
{
    printf("Sum of array is %d\n",a);
}
