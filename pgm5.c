#include <stdio.h>
void main()
{
    int n;
    do
    {
        printf("enter an integer n for sqaure \n");
        scanf("%d", &n);
        printf("%d \n", n * n);
    } while (n != 0);
}
