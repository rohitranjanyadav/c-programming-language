#include <stdio.h>

int sumOfSeries(int);

int main()
{
  int num, result;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  result = sumOfSeries(num);

  printf("Sum = %d", result);

  return 0;
}

int sumOfSeries(int n)
{
  if (n != 0)
    return n + sumOfSeries(n - 1);
  else
    return n;
}
