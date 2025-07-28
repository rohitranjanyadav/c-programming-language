#include <stdio.h>

int main()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 5 == 0 && num % 11 != 0)
    printf("The number is exactly divisible by 5 but not by 11.");
  else if (num % 11 == 0)
    printf("The number is only divisible by 11.");
  else
    printf("The number is neither divisible by 5 nor by 11.");

  return 0;
}