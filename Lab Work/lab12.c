#include <stdio.h>

int main()
{
  int num, sum = 0;

  printf("Enter a five-digit number:");
  scanf("%d", &num);

  for (int i = 0; i < 5; i++)
  {
    sum = sum + num % 10;
    num = num / 10;
  }
   
  printf("The sum of the digits of entered number is %d", sum);

  return 0;
}