#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three subjects marks");
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    int avg=sum/3;
    if(avg<50)
        printf("Pappu FAIL zala:)");
    else if(avg>=50&&avg<60)
         printf("Pappu C grade ala:)");
    else if(avg>=60&&avg<70)
         printf(" Grade B ");
    else
        printf("Grade A");

}
