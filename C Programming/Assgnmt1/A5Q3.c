#include<stdio.h>
void main()
{
    int mat1[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int mat2[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int sum[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];

            printf("%d",sum[i][j]);
        }
        printf("\n");

    }

}
