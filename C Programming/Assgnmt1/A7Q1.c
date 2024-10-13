#include<stdio.h>
int read();
int sum(int ,int);
int subs(int ,int);
int mul(int ,int);
int div(int ,int);
void disp(int ,int,int,int,int,int);

void main()
{
   int a= read();
  int b= read();
    int s= sum(a,b);
    int sub= subs(a,b);
    int m= mul(a,b);
    int d= div(a,b);
    disp(s,sub,m,d,a,b);
}
int read()
{
    int n1;
    printf("Enter a number\n");
    scanf("%d",&n1);
    return n1;

}
int sum(int pa,int pb)
{
    int s=pa+pb;
    return s;
}
int subs(int pa,int pb)
{
    int s1=pa-pb;
    return s1;
}
int mul(int pa,int pb)
{
    int m=pa*pb;
    return m;
}
int div(int pa,int pb)
{
    int d=pa/pb;
    return d;
}
void disp(s,sub,m,d,a,b)
{
    printf("%d is the Addition of %d %d\n",s,a,b);
    printf("%d is the Substraction of %d %d\n",sub,a,b);
    printf("%d is the Multiplication of %d %d\n",m,a,b);
    printf("%d is the Division of %d %d\n",d,a,b);
}
