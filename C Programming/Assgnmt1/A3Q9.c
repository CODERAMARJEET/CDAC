#include<stdio.h>
void main()
{
   int n=1;
   int m=1;
   while(n<=10)
   {
       for(int i=1;i<=10;i++)
       {
         m=i*n;
         printf("%d * %d = %d\n",n,i,m);

       }
       printf("\n");
       n++;

   }
}
