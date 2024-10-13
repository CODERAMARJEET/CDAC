#include<stdio.h>
int main()
{

    float area;
    float peri;
    int l=15;
    int b=30;
    area=l*b;
    peri=2*(l+b);
    printf("Area of %d and %d is %f\n",l,b,area);
    printf("Perimaeter of %d and %d is %f\n",l,b,peri);

    return 0;
}
