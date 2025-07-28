#include <stdio.h>

int findLargest();

int main()
{
  int largest = findLargest();

  printf("The largest number is %d", largest);

  return 0;
}

int findLargest()
{
  int a, b, c;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  printf("Enter third number: ");
  scanf("%d", &c);

  if (a >= b && a >= c)
    return a;
  else if (b >= a && b >= c)
    return b;
  else
    return c;
}
