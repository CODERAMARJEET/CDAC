#include<stdio.h>
int sum(int n)
{
    if(n<=1)
        return n;
    else
        return n+sum(n-1);
}
void main()
{
    int n=10;
    printf("Enter a number\n");
    scanf("%d",&n);
    int s= sum(n);
    printf("Sum is %d \n",s);

}
