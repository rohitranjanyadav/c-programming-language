// #include <stdio.h>

// int main()
// {
//   int year;

//   printf("Enter any Year: ");
//   scanf("%d", &year);

//   if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//     printf("%d is a Leap Year.", year);
//   else
//     printf("%d is not a Leap Year.", year);

//   return 0;
// }

#include <stdio.h>

int main()
{
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);
  
  if (year % 400 == 0)
    printf("%d is a leap year.", year);
  else if (year % 100 == 0)
    printf("%d is not a leap year.", year);
  else if (year % 4 == 0)
    printf("%d is a leap year.", year);
  else
    printf("%d is not a leap year.", year);

  return 0;
}