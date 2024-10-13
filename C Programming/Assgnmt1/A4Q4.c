#include <stdio.h>
void main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int n;
printf("Enter a number to be searched\n");
scanf("%d",&n);
int flag=0;
for(int i=0;i<9;i++)
{
    if(arr[i]==n)
       {flag=1;
       break;
       }
}
 if(flag==1)
            printf("element found");
 else
    printf("element not found");

}
