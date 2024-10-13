#include<stdio.h>
void main()
{
    int n;
    int s=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        s=i*n;
        printf("%d * %d = %d \n",n,i,s);

    }
}
