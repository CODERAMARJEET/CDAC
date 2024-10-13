/*Copy one array to another array using pointer to array*/
#include<stdio.h>
int main()
{
    int arr1[4]={1,2,3,4}, *p1;
    int arr2[4]={}, *p2;

    p1=arr1;
    p2=arr2;
    for(int i=0;i<4;i++){
        p2[i]=p1[i];
        printf("%d", p2[i]);

    }
    return 0;
}
