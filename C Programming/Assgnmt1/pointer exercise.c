/*example of structure and pointer*/
#include <stdio.h>
typedef struct
{
    int rollno;
    int marks;
    int avg;
}student;

 int main()
 {
     student s1,*p;
     p=&s1;
     printf("Enter Roll No\n");
     scanf("%d",&p->rollno);

     printf("Enter Marks\n");
     scanf("%d",&p->marks);

     printf("Enter Average\n");
     scanf("%d",&p->avg);

     printf("Roll No is:%d\n",p->rollno);
     printf("Marks is%d\n",p->marks);
     printf("Enter Roll No%d\n",p->avg);


 }
