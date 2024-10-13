#include<stdio.h>
int factorial(int n)
{
    int fact;
    if(n==1)
        return 1;
    else
        fact=n*factorial(n-1);

  return (fact);
}
void print(int pf)
{
    printf("Factorial is %d",pf);
}


void main()
{
    int n=10;
    int f= factorial(n);
    print(f);
}
