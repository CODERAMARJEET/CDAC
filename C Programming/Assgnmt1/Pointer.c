#include <stdio.h>
int main()
{
    int a=10, *pa;
    char b='a', *pb;
    float c=10.24, *pc;

    pa=&a;
    pb=&b;
    pc=&c;

    printf("value of a is %d\n", *pa);
    printf("value of a is %c\n", *pb);
    printf("value of a is %f\n", *pc);

    printf("value of pa is %p\n", pa);
    printf("value of pb is %p\n", pb);
    printf("value of pc is %p\n", pc);


    pa++; pb++;pc++;
    printf("value of pa is %p\n", pa);
    printf("value of pb is %p\n", pb);
    printf("value of pc is %p\n", pc);

    pa--; pb--;pc--;
    printf("value of pa is %p\n", pa);
    printf("value of pb is %p\n", pb);
    printf("value of pc is %p\n", pc);


    printf("value of a is %d\n", *pa);
    printf("value of a is %c\n", *pb);
    printf("value of a is %f\n", *pc);


    return 0;
}

