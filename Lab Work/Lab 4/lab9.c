#include <stdio.h>

int main()
{
  char ch;

  printf("Enter a Character: ");
  scanf("%c", &ch);

  int ascii = (int)ch;

  if (ascii >= 65 && ascii <= 90)
    printf("The Character entered (%c) is a Capital letter.", ch);
  else if (ascii >= 97 && ascii <= 122)
    printf("The Character entered (%c) is a Small letter.", ch);
  else if (ascii >= 48 && ascii <= 57)
    printf("The Character entered (%c) is a Digit.", ch);
  else
    printf("The Character entered (%c) is a Special Symbol.", ch);

  return 0;
}