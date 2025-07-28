#include <stdio.h>

// Function to calculate factorial
double factorial(int n)
{
  double fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

// Function to calculate x raised to the power y (x^y)
double power(double base, int exponent)
{
  double result = 1;
  for (int i = 1; i <= exponent; i++)
  {
    result *= base;
  }
  return result;
}

// Function to compute the sum of the series
double sumOfSeries(double x, int terms)
{
  double sum = 1.0; // First term is 1

  for (int i = 1; i < terms; i++)
  {
    sum += power(x, i) / factorial(i);
  }

  return sum;
}

int main()
{
  double x;
  int n;

  // Input from user
  printf("Enter the value of x: ");
  scanf("%lf", &x);

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // Compute and display the result
  printf("Sum of the series: %.6lf\n", sumOfSeries(x, n));

  return 0;
}
