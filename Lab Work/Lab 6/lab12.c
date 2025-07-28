#include <stdio.h>

int main()
{
    int m, matrix[10][10], sum = 0;

    printf("Enter rows/columns:\n");
    scanf("%d", &m);

    printf("Enter a %d*%d matrix:\n", m, m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < m; i++)
    {
        sum += matrix[i][i]; // Primary diagonal
        // sum += matrix[i][2 - i]; // Add this line too if you want secondary diagonal
    }

    printf("Sum of primary diagonal elements: %d\n", sum);

    return 0;
}
