#include <stdio.h>
int main()
{

    const float pie=3.14;
    int r=6;
    float area=pie*r*r;
    float circum=2*pie*r;

    printf("The area of circle is %f\n",area);
    printf("The circumference of circle is %f",circum);

    return 0;
}
