#include <stdio.h>
void main()
{
    char a[10];
    char b[10];
    char c[10];
    int i;
    int j;
    printf("Enter two strings");
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }


    for(j=0;b[j]!='\0';j++,i++)
    {

           c[i]=b[j];
    }
    c[i]='\0';
    printf("%s",c);

}
