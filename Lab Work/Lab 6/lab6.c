#include <stdio.h>

int main()
{
  int arr[10], temp;

  printf("Enter 10 numbers:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Sorting using Bubble Sort
  for (int i = 0; i < 9; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Sorted numbers in ascending order:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}
