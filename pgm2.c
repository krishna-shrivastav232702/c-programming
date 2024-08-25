#include <stdio.h>
void main()
{
  int mat, sci, subpassed;
  printf("enter the subjects you have passed \n");
  scanf("%d%d", &mat, &sci);
  if (subpassed == mat && sci)
  {
    printf("he will get 45 ruppes");
  }
  else
  {
    printf("he will get 0 ruppes");
  }
  if (subpassed == mat || sci)
  {
    printf("he will get 10 ruppes");
  }
}