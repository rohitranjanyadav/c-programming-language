#include <stdio.h>

int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", i);
    }

    printf("\t");

    for (int j = 5; j >= i; j--)
    {
      printf("%d", 6 - i);
    }

    printf("\n");
  }
  return 0;
}
