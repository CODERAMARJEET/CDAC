#include<stdio.h>
void main()
{
char ch[]={'a','e','i','o','f','w'};
int c=0;
for(int i=0;i<6;i++)
{
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
     c++;

}
printf("%d is the count of vowel in the array\n",c);
}
