#include <stdio.h>

int main()
{
  int age = 15;

  if (age > 10)
  {
    printf("We are inside if\n");
    printf("Your age is greater than 10\n");
  }
  if (age % 5 == 0)
  {
    printf("We are inside second if\n");
    printf("Your age is divisible by 5");
  }

  return 0;
}