#include <stdio.h>
void main()
{
    int i=1,n;
    printf("enter a num to find table : \n");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d x %d =%d \n",n,i,n*i );
        i++;
    }
}