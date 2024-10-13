#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three subjects marks");
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    int avg=sum/3;
    if(avg>50)
        printf("Pappu pass zala:)");
    else
        printf("Pappu fail zala:(");

}
