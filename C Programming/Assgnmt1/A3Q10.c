#include<stdio.h>
void main()
{
    int n;
    int sq;
    int c;
    int ch;


   do{
        printf("Enter a number");
        scanf("%d",&n);
        sq=n*n;
        c=n*n*n;
        printf("%d\n",sq);
        printf("%d\n",c);
         printf("Do you want to continue");
        scanf("%d",&ch);

}
while(ch==1);
}

