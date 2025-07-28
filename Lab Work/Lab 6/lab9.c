#include <stdio.h>

int main()
{
    int m, arr[20], reversed[20];

    printf("Enter total number of elements (max:20):\n");
    scanf("%d", &m);

    printf("Enter %d elements:\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        reversed[i] = arr[m - 1 - i];
    }

    printf("Reversed array:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", reversed[i]);
    }

    return 0;
}
