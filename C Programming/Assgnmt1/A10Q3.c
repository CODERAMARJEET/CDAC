/*This is not third assignment it is example for structure within a structure*/
#include<stdio.h>
typedef struct
{
    int rollno;
    char name;
    struct
    {
        int m1;
        int m2;
        int m3;
    }marks;

}student;

int main()
{
  student s1;
  s1.rollno=1;
  s1.name='a';
  s1.marks.m1=100;
  s1.marks.m2=78;
  s1.marks.m3=90;
  printf("%d\n",s1.rollno);
  printf("%c\n",s1.name);
  printf("%d\n",s1.marks.m1);
  printf("%d\n",s1.marks.m2);
  printf("%d\n",s1.marks.m3);
}
