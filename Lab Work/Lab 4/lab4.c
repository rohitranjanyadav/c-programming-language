#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Enter three numbers:\n");
  scanf("%d %d %d", &a, &b, &c);

  if (a <= b && a <= c)
    printf("Smallest among three is %d", a);
  else if (b <= c && b <= a)
    printf("Smallest among three is %d", b);
  else
    printf("Smallest among three is %d", c);

  return 0;
}