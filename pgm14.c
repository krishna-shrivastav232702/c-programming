#include <stdio.h>
void main()
{
    int n, ori, sum = 0,i;
    printf("enter a num to find amstrong number \n");
    scanf("%d", &n);
    ori = n;
    while (n > 0)
    {
        i = n % 10;
        sum = i * i * i + sum;
        n = n/10;
    }
    if (ori == sum)
        printf("given number %d is an amstrong number \n", sum);
    else
        printf("given number %d is not an amstrong number \n", sum);
}