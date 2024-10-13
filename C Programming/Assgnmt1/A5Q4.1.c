#include<stdio.h>
void main()
{
    int m,n=0;
    printf("Enter no of rows and column");
    scanf("%d%d",&m,&n);
    printf("rows %d cols %d ",m,n);
    int mat1[m][n];
     int mat2[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);

        }

    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat2[j][i]=mat1[i][j];


        }

    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            printf("%d\t",mat2[i][j]);
        }
        printf("\n");

    }
}
