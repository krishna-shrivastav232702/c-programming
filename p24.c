#include<stdio.h>
void main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        printf("enter value for array \n");
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}