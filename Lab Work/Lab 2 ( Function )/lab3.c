#include <stdio.h>

float multiply(float, int);

int main()
{
  float f, product;
  int i;

  printf("Enter a float number: ");
  scanf("%f", &f);

  printf("Enter an integer: ");
  scanf("%d", &i);

  product = multiply(f, i);

  printf("Product = %.2f\n", product);

  return 0;
}

float multiply(float x, int y)
{
  float product = x * y;
  return product;
}
