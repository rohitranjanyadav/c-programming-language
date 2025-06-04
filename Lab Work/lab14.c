#include <stdio.h>

int main()
{
  int num;

  printf("Enter a Decimal Number:");
  scanf("%d", &num);

  printf("Octal of %d is %o.\n", num, num);
  printf("Hexadecimal of %d is %X.", num, num);

  return 0;
}