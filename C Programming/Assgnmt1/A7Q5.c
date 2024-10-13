#include<stdio.h>
void main()
{
int a[3][3],s,i;
printf("Enter array\n");
for(i=0;i<=2;i++)
{
    for(int j=0;j<=2;j++)
    {
        scanf("%d",&a[i][j]);

    }
    s=sum(a);

}
disp(s);

}
int sum(int pa[3][3])
{
    int i,s=0;
    for(i=0;i<=2;i++)
{
    for(int j=0;j<=2;j++)
    {
      s+=pa[i][j];
    }
}
return s;
}
void disp(int a)
{
    printf("Sum of 2D array is %d\n",a);
}
