#include <stdio.h>

int power(int, int);

int main()
{
  int base, exponent, result;

  printf("Enter base: ");
  scanf("%d", &base);

  printf("Enter exponent: ");
  scanf("%d", &exponent);

  result = power(base, exponent);

  printf("%d^%d = %d", base, exponent, result);
  
  return 0;
}

int power(int a, int b)
{
  if (b != 0)
    return (a * power(a, b - 1));
  else
    return 1;
}
