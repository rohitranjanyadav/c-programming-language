#include <stdio.h>

int main()
{
  for (int i = 0; i < 10; i++)
  {
    if (i == 5) // Checks the condition
    {
      printf("For Loop is Stopped due to break\n");
      break; // Exit the loop
      // continue; // Skip the iteration & move to the next one
    }
    printf("i is %d\n", i);
  }

  return 0;
}