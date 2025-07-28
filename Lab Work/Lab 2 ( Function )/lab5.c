#include <stdio.h>

long int factorial(int, int);

int main()
{
    long int number, result;

    printf("Enter any positive integer: ");
    scanf("%ld", &number);

    // if (number < 0) {
    //     printf("Factorial is not defined for negative numbers.\n");
    //     return 1;
    // }

    result = factorial(number, 1);

    printf("%ld! = %ld\n", number, result);
    return 0;
}

long int factorial(int n, int f)
{
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
