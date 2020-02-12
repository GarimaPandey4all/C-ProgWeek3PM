#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2],i,j;

    printf("Enter values in Matrix1:");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
    }

    printf("Enter values in Matrix2:");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
    }

    printf("Matrix1 values are:\n");
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
                {
                    printf("%d\t", matrix1[i][j]);
                    if(j==1)
                        printf("\n");
                }
        }

        printf("Matrix2 values are:\n");
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
                {
                    printf("%d\t", matrix2[i][j]);
                    if(j==1)
                        printf("\n");
                }
        }


        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        }

        printf("Addition is:\n");
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
        {
            printf("%d\t", result[i][j]);
            if(j==1)
                printf("\n");
        }
        }

    return 0;
}
