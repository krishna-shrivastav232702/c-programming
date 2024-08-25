#include<stdio.h>
void main ()
{
    int i,fac=1,j;
    printf("enter a value to find factorial: \n");
    scanf("%d",&i);
    j=1;
    while(j<=i)
    {
        fac=fac*j;
        j++;
    }
    printf("factorial of the given number = %d",fac);
}