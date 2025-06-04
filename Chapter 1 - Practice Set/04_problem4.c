#include <stdio.h>

int main()
{
  float p, r, t, i;

  printf("Enter principal amount:\n");
  scanf("%f", &p);

  printf("Enter rate:\n");
  scanf("%f", &r);

  printf("Enter time in years:\n");
  scanf("%f", &t);

  i = (p * r * t) / 100;

  printf("The value of simple interest is %f", i);

  return 0;
}