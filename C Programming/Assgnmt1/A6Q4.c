#include <stdio.h>
void main()
{
 char s1[10];
 char s2[10];
 int flag=1;
 printf("Enter two string");
 scanf("%s\n",s1);
 scanf("%s",s2);
 int len1, len2;
 for(len1=0;s1[len1]!='\0';len1++);
  for(len2=0;s1[len2]!='\0';len2++);
 if(len1!=len2)
    {
    flag=0;
 }
 else
    for(int i=0;i<s1[len1];i++)
 {
     if(s1[i]!=s2[i]){
        flag=0;

     }}
     if(flag!=1)
        printf("strings are equal");
     else
        printf("strings are not equal");
 }


