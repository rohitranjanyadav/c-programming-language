#include <stdio.h>

int sum(int);

int main()
{
  int result;

  result = sum(20);

  printf("Sum of first 20 natural numbers is: %d\n", result);

  return 0;
}

int sum(int n)
{
  int i, total = 0;
  for (i = 1; i <= n; i++)
  {
    total += i;
  }
  return total;
}
