#include <stdio.h>

int main()
{
  float a, b, add, sub, mul, div;

  printf("Enter two numbers:\n");
  scanf("%f %f", &a, &b);

  add = a + b;
  printf("Addition: %.2f\n", add);

  sub = a - b;
  printf("Subtraction: %.2f\n", sub);

  mul = a * b;
  printf("Multiplication: %.2f\n", mul);
  
  div = a / b;
  printf("Div: %.2f\n", div);

  return 0;
}