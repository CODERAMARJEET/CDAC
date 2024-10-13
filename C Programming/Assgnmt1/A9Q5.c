#include<stdio.h>
int main()
{
    int arr[3][3]={
                  {1,2,3},
                  {4,5,6,},
                  {7,8,9}
                  };
    int(*ptr)[3]=arr;

    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
            {
            printf("element of at arr %d %d is %d\n", i,j, *(*(ptr+i)+j));

            }
    }
    return 0;
}
