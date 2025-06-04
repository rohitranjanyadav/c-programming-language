#include <stdio.h>

int main()
{
  int num, rev_Num;

  printf("Enter a two digit number:");
  scanf("%d", &num);

  rev_Num = (num % 10) * 10 + (num / 10);

  printf("Reversed Number = %d", rev_Num);

  return 0;
}