#include<stdio.h>
void main()
{
    int i,sum=0;
    printf("enter value of n \n");
    scanf("%d",&i);
    while(i>0)
    {
        sum=sum+i%10;
        i/=10;
    }
    printf("sum of digits =%d",sum);

}