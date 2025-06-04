#include <stdio.h>

int main()
{
  int i = 0;

  do
  {
    printf("The value of i is %d\n", i);
    i++;
  } while (i < 5);  // 'do-while' executes the code & then checks the condition

  return 0;
}