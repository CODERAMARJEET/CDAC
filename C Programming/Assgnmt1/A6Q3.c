#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter a string\n");
    scanf("%s",str);
    int len=0;
    for( len=0;str[len]!='\0';len++);
    printf("%d",len);

}
