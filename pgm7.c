#include <stdio.h>
void main()
{
    int p1, p2, p3;
    printf("enter the heights of 3 studnets\n");
    scanf("%d%d%d", &p1, &p2, &p3);
    if (p1 > p2)
    {
        if (p1 > p3)
            printf("p1 is  tallest among 3\n");
        else
            printf("p3 is tallest among 3\n");
    }
   else
   {
    if (p2 > p3)
        printf("p2 is tallest among 3\n");
    else
        printf("p3 is tallest among 3\n");
   }
}