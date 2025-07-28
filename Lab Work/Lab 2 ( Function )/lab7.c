#include <stdio.h>

long int factorial(int);

int main()
{
  int number;
  long int result;

  printf("Enter a positive integer: ");
  scanf("%d", &number);

  result = factorial(number);

  printf("Factorial of %d is %ld\n", number, result);

  return 0;
}

long int factorial(int n)
{
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}
