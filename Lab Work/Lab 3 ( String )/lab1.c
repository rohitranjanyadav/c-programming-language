#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];

  printf("Enter string: ");
  gets(str);

  int len = strlen(str);
  printf("Length of the string using strlen: %d", len);
  // int len = 0;

  while(str[len] != '\0')
  {
    len++;
  }

  printf("\nLength of the string using while loop: %d", len);

  return 0;
}