#include <stdio.h>

int main()
{
  int arr[10], largest, smallest;

  printf("Enter 10 numbers:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }

  largest = smallest = arr[0];

  for (int i = 1; i < 10; i++)
  {
    if (arr[i] > largest)
      largest = arr[i];
    if (arr[i] < smallest)
      smallest = arr[i];
  }

  printf("Largest = %d\nSmallest = %d\n", largest, smallest);

  return 0;
}
