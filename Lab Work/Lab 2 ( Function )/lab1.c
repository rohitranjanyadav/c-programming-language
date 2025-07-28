#include <stdio.h>

void add(int, int);
void sub(int, int);
void div(int, int);
void mul(int, int);

int main()
{
  int a, b;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  add(a, b);
  sub(a, b);
  div(a, b);
  mul(a, b);

  return 0;
}

void add(int a, int b)
{
  int add;
  add = a + b;
  printf("Addition = %d\n", add);
}
void sub(int a, int b)
{
  int sub;
  sub = a - b;
  printf("Subtraction = %d\n", sub);
}
void div(int a, int b)
{
  float div;
  div = (float)a / b;
  printf("Division = %.2f\n", div);
}

void mul(int a, int b)
{
  int mul;
  mul = a * b;
  printf("Multiplication = %d", mul);
}