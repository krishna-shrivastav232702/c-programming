#include <stdio.h>
void main()
{
    int n, i;
    printf("enter value of n \n");
    scanf("%d", &n);
    i = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
            printf("%d", i);
        printf("\n");
        i++;
    }
}
