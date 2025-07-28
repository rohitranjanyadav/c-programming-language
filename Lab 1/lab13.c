#include <stdio.h>

int main()
{
  int num, firstDigit, lastDigit, sum;

  printf("Enter a four-digit number:");
  scanf("%d", &num);

  lastDigit = num % 10;

  while (num >= 10)
  {
    num = num / 10;
  }
  firstDigit = num;

  sum = firstDigit + lastDigit;

  printf("The sum of first digit: %d and last digit: %d is %d", firstDigit, lastDigit, sum); 

  return 0;
}