#include<stdio.h>
void main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("enter the input for array\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i=i+2)
    printf("%d \n",a[i]);
}