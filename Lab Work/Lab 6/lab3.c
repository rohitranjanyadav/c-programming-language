#include <stdio.h>

int main()
{
  int arr[10];

  printf("Enter 10 numbers:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Entered Numbers and their Addresses:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Value = %d\tAddress = %p\n", arr[i], &arr[i]);
  }

  return 0;
}
