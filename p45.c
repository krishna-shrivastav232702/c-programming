#include<stdio.h>
int main()
{
    int a[10],i,*p;
    for(i=0;i<10;i++)
    {
        printf("enter no \n");
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0;i<10;i++)
    printf("%d \n",*(p++));
    return 0;
}