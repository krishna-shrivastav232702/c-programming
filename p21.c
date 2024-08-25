#include<stdio.h>
void main()
{
    int a[10],i,even=0,odd=0;
    for(i=0;i<10;i++)
    {
        printf("enter number \n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("total even =%d and total odd = %d",even,odd);
}