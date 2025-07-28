#include <stdio.h>
#define FULLMARKS 500

int main()
{
  float c, mp, acc, eng, math, percentage;

  printf("Enter marks of C, Microprocessor, Account, English and Math respectively:\n");
  scanf("%f %f %f %f %f", &c, &mp, &acc, &eng, &math);

  percentage = ((c + mp + acc + eng + math ) / FULLMARKS) * 100;

  printf("Percentage: %.2f\n", percentage);

  if (percentage >= 80)
    printf("Rank: Distinction");
  else if (percentage >= 60 && percentage < 80)
    printf("Rank: First Division");
  else if (percentage >= 40 && percentage < 60)
    printf("Rank: Pass");
  else
    printf("Rank: Fail");

  return 0;
}