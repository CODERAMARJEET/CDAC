#include <stdio.h>
#include<string.h>
struct employee
{
    int empno;
    char name[20];
    int deptcode;
    int salary;

};

int main()
{
    struct employee empdetail[2];
    printf("Detail of employee 1\n");
    empdetail[0].empno=101;
    strcpy(empdetail[0].name,"Amarjeet");
    empdetail[0].deptcode=1111;
    empdetail[0].salary=90000;
    printf("%d\n",empdetail[0].empno);
    printf("%s\n",empdetail[0].name);
    printf("%d\n",empdetail[0].deptcode);
    printf("%d\n",empdetail[0].salary);

    printf("Detail of employee 2\n");
    empdetail[1].empno=102;
    strcpy(empdetail[1].name,"Shivraj");
    empdetail[1].deptcode=1112;
    empdetail[1].salary=900000;
    printf("%d\n",empdetail[1].empno);
    printf("%s\n",empdetail[1].name);
    printf("%d\n",empdetail[1].deptcode);
    printf("%d\n",empdetail[1].salary);
}

