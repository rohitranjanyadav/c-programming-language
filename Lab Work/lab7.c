#include <stdio.h>

int main()
{
  int a, b, quotient, remainder;

  printf("Enter first integer: ");
  scanf("%d", &a);
  printf("Enter second integer: ");
  scanf("%d", &b);

  quotient = a / b;
  printf("Quotient = %d\n", quotient);

  remainder = a % b;
  printf("Remainder = %d", remainder);
  return 0;
}
