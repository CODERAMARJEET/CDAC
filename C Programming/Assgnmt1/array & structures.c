#include <stdio.h>
#include <string.h>
void main()
{

    struct student{
    int rollno;
    char name[20];
    float avg;
    }
void main()

struct student s1,s2;
{

s1.rollno=10;
strcpy(s1.name,"ABC");
s1.avg=60.23;

printf("rollno is %d\n",s1.rollno);
printf("name is %s\n",s1.name);
printf("avg is %f\n",s1.avg);

s2.rollno=20;
strcpy(s1.name,"XYZ");
s2.avg=90.89;
}

printf("rollno is %d\n",s2.rollno);
printf("name is %s\n",s2.name);
printf("avg is %f\n",s2.avg);




}

