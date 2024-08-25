#include<stdio.h>
void main()
{
    int a[10],i,sum=0,prod=1;
    for(i=0;i<10;i++)
    {
        printf("enter number \n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        prod=prod*a[i];
    }
    printf("sum of even = %d and producr of odd =%d ",sum,prod);
}