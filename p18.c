#include <stdio.h>
void main()
{
    int i, j;
    i = 5;
    while (i >=1)
    {
        j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        i=i-1;
        printf("\n");
    }
}