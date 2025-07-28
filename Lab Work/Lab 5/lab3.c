#include <stdio.h>

int main()
{
  int num, original, rem, sum;

  printf("Armstrong numbers between 1 and 500 are:\n");
  for (num = 1; num <= 500; num++)
  {
    original = num;
    sum = 0;
    while (original != 0)
    {
      rem = original % 10; // Get last digit
      sum += rem * rem * rem;
      original /= 10; // Remove last digit
    }
    if (sum == num)
    {
      printf("%d ", num);
    }
  }

  return 0;
}
