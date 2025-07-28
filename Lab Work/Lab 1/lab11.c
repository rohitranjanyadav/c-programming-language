#include <stdio.h>

int main()
{
  int a, b, temp;

  printf("Enter First Number:");
  scanf("%d", &a);

  printf("Enter Second Number:");
  scanf("%d", &b);

  temp = a, a = b, b = temp;

  printf("First Number:%d\n", a);
  printf("Second Number:%d", b);

  return 0;
}