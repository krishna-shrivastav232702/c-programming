#include<stdio.h>
void main()
{
    int i ,j,b;
    i=1;
    while(i<=5)
    {
        b=1;
        while(b<=5-i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}