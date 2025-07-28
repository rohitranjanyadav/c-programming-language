#include <stdio.h>

int main()
{
  int num, sum = 0;

  printf("Enter a five-digit number: ");
  scanf("%d", &num);

  for (int i = 0; i < 5; i++)
  {
    sum = sum + num % 10 + 1;
    num /= 10;
  }

  printf("Sum = %d", sum);

  return 0;
}