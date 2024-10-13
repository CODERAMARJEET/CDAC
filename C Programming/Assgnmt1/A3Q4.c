#include<stdio.h>
void main()
{
  int n;
  int a=0;
  int b=1;
  int f=0;
  printf("Enter a number");
  scanf("%d",&n);
  printf("%d\n",a);
  printf("%d\n",b);
  for(int i=0;i<=n;i++)
  {
      f=a+b;
      printf("%d\n",f);
      a=b;
      b=f;
  }
}
