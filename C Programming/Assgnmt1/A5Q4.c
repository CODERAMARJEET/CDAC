#include<stdio.h>
void main()
{

    int mat1[2][3]={{1,2,3},
                   {4,5,6}};
     int mat2[3][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            mat2[j][i]=mat1[i][j];


        }

    }

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {

            printf("%d\t",mat2[i][j]);
        }
        printf("\n");

    }
}
