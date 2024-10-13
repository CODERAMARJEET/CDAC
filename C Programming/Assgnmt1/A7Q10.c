#include<stdio.h>
int gv=30;
int globalv()
{
    printf("in function %d\n",gv);
    gv=40;
}
int localv()
{
int lv=10;
printf("local variable %d\n",lv);
}
int staticv()
{
static int x=0;
x=x+10;
printf("x is static is%d\n",x);
}
int main()
{
    printf("Before %d\n",gv);
    globalv();
    printf("After %d\n",gv);
    localv();
    for(int i=0;i<=3;i++)
    {
        staticv();
    }

}
