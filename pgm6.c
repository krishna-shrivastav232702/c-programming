#include <stdio.h>
void main()
{
    int n,i;
    printf("enter a value of n \n");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d * %d = %d \n",n,i,n*i);
        i++;
    }
}
