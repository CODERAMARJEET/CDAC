#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int pos;
    int ch;
    int i;
    printf("Enter a string and position and number of charecters to extract\n");
    scanf("%s",a);
    scanf("%d",&pos);
    scanf("%d",&ch);
    for(i=pos-1;i<pos-1+ch;i++)
        printf("%c",a[i]);

}
