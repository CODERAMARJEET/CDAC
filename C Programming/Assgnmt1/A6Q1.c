#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter a string\n");
    scanf("%s",str);
    int flag=1;
    for(int i=0;i<='\0';i++)
    {
        if(str[i]>=42&&str[i]<=57)
            {
                flag=0;
                break;
            }
    }
    if(flag==0)
        printf("String is number");
    else
        printf("String is alphabet");


}
