#include <stdio.h>

int main()
{
  char str[100];

  printf("Enter a string: \n");
  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; i++)
    printf("ASCII value of Character '%c' is %d  \n", str[i], str[i]);

  return 0;
}