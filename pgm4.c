#include <stdio.h>
void main()
{
    int i = 0, n;
    printf("enter an integer n \n");
    scanf("%d", &n);
    do
    {
        printf("%d", i);
        printf("\n");
        i = i + 1;
    } while (i < n);
}