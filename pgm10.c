#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("enter value of n \n");
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
       printf("sum=%d",sum);
}