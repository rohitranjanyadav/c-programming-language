#include <stdio.h>

int main()
{
    int arows, acolumns, brows, bcolumns, a[10][10], b[10][10], result[10][10], sum = 0;

    printf("Enter order of matrix A:\n");
    scanf("%d %d", &arows, &acolumns);
    printf("Enter order of matrix B:\n");
    scanf("%d %d", &brows, &bcolumns);

    if (acolumns == brows)
    {
        printf("Enter %dx%d matrix A:\n", arows, acolumns);
        for (int i = 0; i < arows; i++)
            for (int j = 0; j < acolumns; j++)
                scanf("%d", &a[i][j]);

        printf("Enter %dx%d matrix B:\n", brows, bcolumns);
        for (int i = 0; i < brows; i++)
            for (int j = 0; j < bcolumns; j++)
                scanf("%d", &b[i][j]);

        for (int i = 0; i < arows; i++)
        {
            for (int j = 0; j < bcolumns; j++)
            {
                for (int k = 0; k < brows; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
        
        printf("Product of matrices:\n");
        for (int i = 0; i < arows; i++)
        {
            for (int j = 0; j < bcolumns; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Can not multiply the matrices a and b.\n(Hint: Columns of matrix 'a' must be equal to Rows of matrix 'b'.)");
    }

    return 0;
}
