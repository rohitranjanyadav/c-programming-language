#include <stdio.h>

int main()
{
  int cp, sp, pl;
  printf("Enter Cost Price and Selling Price:\n");
  scanf("%d %d", &cp, &sp);

  sp > cp ? printf("Seller has made profit\n") : printf("Seller has made loss\n");

  if (sp > cp)
  {
    pl = sp - cp;
    printf("Profit: %d", pl);
  }
  else
  {
    pl = cp - sp;
    printf("Loss: %d", pl);
  }

  return 0;
}