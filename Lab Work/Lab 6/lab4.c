#include <stdio.h>

int main()
{
  int arr[10], sum = 0, product = 1, max;
  float average;

  printf("Enter 10 numbers:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
    product *= arr[i];
  }

  average = sum / 10;

  max = arr[0];
  for (int i = 1; i < 10; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }

  printf("Sum = %d\nProduct = %d\nAverage = %.2f\nMaximum = %d\n", sum, product, average, max);

  return 0;
}
