#include<stdio.h>
void main()
{
char ch[]={'a','b','x','y','z'};
for(int i =0;i<5;i++)
{
    ch[i]=ch[i]-32;
}
for(int i =0;i<5;i++)
{
    printf("%c",ch[i]);
}

}
