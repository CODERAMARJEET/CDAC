#include<stdio.h>
int min(int pa[])
{
    int i,m=pa[0];
    for(i=0;i<5;i++)
        {
            if(pa[i]<m)
            m=pa[i];
        }
    return m;
}
void print(int s)
{
    printf("Minimum of array is %d\n",s);
}

void main()
{
int a[5],s,i;
printf("Enter array\n");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    s=min(a);
    print(s);
}
