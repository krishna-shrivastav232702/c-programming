#include<stdio.h>
void main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        printf("enter number \n");
        scanf("%d",&a[i]);
    }
    printf("array elements are \n");
    for(i=0;i<10;i++)
    printf("%d",a[i]);
}