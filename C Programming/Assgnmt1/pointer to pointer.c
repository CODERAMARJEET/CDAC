#include <stdio.h>
int main()
{
    int a=10, *pa, **x;
    char b='a', *pb, **y;
    float c=10.24, *pc, **z;

    pa=&a;
    pb=&b;
    pc=&c;

    x=&pa;
    y=&pb;
    z=&pc;

    printf("value of a is %d\n", pa);
    printf("value of a is %c\n", pb);
    printf("value of a is %f\n", pc);

    printf("value of a is %d\n", *pa);
    printf("value of a is %c\n", *pb);
    printf("value of a is %f\n", *pc);

    printf("value of a is %d\n'", **x);
    printf("value of a is %d\n'", **y);
    printf("value of a is %d\n'", **z);



    return 0;

}
