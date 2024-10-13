#include<stdio.h>
void main()
{
    int n;
    int s=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            s=s*i;

    }
    printf("%d is the factorial",s);
}
