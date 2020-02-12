#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10][10][10], i, j, k, n, m, p;

    printf("Enter the size of Array[n]:");
    scanf("%d", &n);

    printf("Enter the size of Array[m]:");
    scanf("%d", &m);

    printf("Enter the size of Array[p]:");
    scanf("%d", &p);

    printf("Enter the values in 3D-Array:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<p; k++)
            {
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    printf("Values in 3D-Array:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<p; k++)
            {
                printf("%d ", array[i][j][k]);
            }
        }
    }


    return 0;
}
