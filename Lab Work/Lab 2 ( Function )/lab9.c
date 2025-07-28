#include <stdio.h>

int fibonacci(int);

int main()
{
  int n;

  printf("Enter number of terms to display: ");
  scanf("%d", &n);

  printf("Fibonacci Series up to %d terms:\n", n);

  for (int i = 0; i < n; i++)
  {
    printf("%d ", fibonacci(i));
  }

  printf("\n");
  return 0;
}

int fibonacci(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}
