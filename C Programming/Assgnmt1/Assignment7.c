#include <stdio.h>
int main()
{
    int num;
    printf("Enter number to find year months and days\n");
    scanf("%d",&num);
    int year=num/365;
    int rem=num%365;
    int weeks=rem/7;
    int days=rem%7;

    printf("The Number of years is %d and weeks is %d and days is %d",year,weeks,days);

    return 0;

}
