#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the side of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&a==c)
        printf("Eqilateral Triangle");
    else if(a==b||a==c||b==c)
        printf("Isosceles Triangle");
    else if((a*a)+(b*b)+(c*c))
        printf("Right angle triangle");
    else if(a!=b&&b!=c&&a!=c)
        printf("Scalene Triangle");

    else
        printf("Not a triangle");
}
