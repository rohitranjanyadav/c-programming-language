#include <stdio.h>

int power(int, int);

int main()
{
  int a, b, result;

  printf("Enter base: ");
  scanf("%d", &a);

  printf("Enter exponent: ");
  scanf("%d", &b);

  result = power(a, b);

  printf("%d raised to power %d is %d\n", a, b, result);

  return 0;
}

int power(int base, int exponent)
{
  int result = 1;

  for (int i = 1; i <= exponent; i++)
  {
    result *= base;
  }

  return result;
}
