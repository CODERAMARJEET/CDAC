#include<stdio.h>
void main()
{
    int n;
    int rem;
    int sum;
    printf("Enter a five digit number");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("%d is the sum of digit\n",sum);

}
