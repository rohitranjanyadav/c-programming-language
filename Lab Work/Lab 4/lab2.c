#include <stdio.h>

int main()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0)
    printf("Even");
  else
    printf("Odd");

  return 0;
}