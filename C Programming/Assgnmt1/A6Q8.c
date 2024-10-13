#include<stdio.h>
#include<string.h>
void main()
{
    char a[10]="MON";
     int status=1;
     int i,j;
    for(i=0,j=strlen(a)-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            status=0;
            break;
        }
    }
    if(status==0)
        printf("Not Palindrom");
    else
         printf("Palindrom");

}
