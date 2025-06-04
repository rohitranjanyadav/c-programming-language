#include <stdio.h>

int main()
{
  int a, b, c, d;

  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("Enter third number: ");
  scanf("%d", &c);
  printf("Enter fourth number: ");
  scanf("%d", &d);

  if (a > b && a > c && a > d)
  {
    printf("%d is greatest number among four.", a);
  }
  else if (b > a && b > c && b > d)
  {
    printf("%d is greatest number among four.", b);
  }
  else if (c > a && c > b && c > d)
  {
    printf("%d is greatest number among four.", c);
  }
  else
  {
    printf("%d is greatest number among four.", d);
  }

  return 0;
}