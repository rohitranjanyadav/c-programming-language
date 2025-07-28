#include <stdio.h>

int main()
{
  int i = 10, sum = 0;
  while (i >= 1)
  {
    printf("%d ", i);
    sum += i;
    i--;
  }
  printf("\nSum: %d", sum);
  return 0;
}
