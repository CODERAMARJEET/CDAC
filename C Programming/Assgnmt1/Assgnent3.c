#include <stdio.h>

int main()
{

    int add;
    int subs;
    float mul;
    float div;
    int a=6;
    int b=2;
    add=a+b;
    subs=a-b;
    mul=a*b;
    div=a/b;
    printf("Addition of %d and %d is %d\n",a,b,add);
    printf("Substraction of %d and %d is %d\n",a,b,subs);
    printf("Multiplication of %d and %d is %d\n",a,b,mul);
    printf("Division of %d and %d is %d",a,b,div);

    return 0;

}
