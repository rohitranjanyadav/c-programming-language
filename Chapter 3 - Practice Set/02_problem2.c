#include <stdio.h>

int main()
{
  int math, science, eng, per;

  printf("Enter mark of Math:\n");
  scanf("%d", &math);
  printf("Enter mark of Science:\n");
  scanf("%d", &science);
  printf("Enter mark of English:\n");
  scanf("%d", &eng);

  printf("The marks obtained are %d, %d and %d.\n", math, science, eng);

  per = (math+science+eng)/3;

  if(math<33 || science<33 || eng<33)
  {
    printf("You are failed due to less marks in individual subject/s\n");
  }
  else if(per<40)
  {
    printf("You are failed due to less percentage\n");
  }
  else{
    printf("You are passed with %d percentage\n", per);
  }

  return 0;
}