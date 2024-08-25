#include <stdio.h>
void main()
{
int a,b,c,d,e;
printf("enter the heights of 5 classmates \n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a>b)
{
    if(a>c)
    {
        if(a>d)
        {
            if(a>e)
            printf("a is largest \n");
            else
            printf("e is largest \n");
        }
    }
    if(c>d)
    {
        if(c>e)
        printf("c is largest \n");
        else
        printf("e is largest \n");
    }
    if(d>e)
    printf("d is largest \n");
    else
    printf("e is largest \n");
}
if(b>c)
{
    if(b>d)
    {
        if(b>e)
        printf("b is largest \n");
        else
        printf("e is largest \n"); 
    }
}
if(c>d)
{
    if(c>e)
    printf("c is largest \n");
    else
    printf("e is largest \n");
}
if (d>e)
printf("d is largest \n");
else
printf("e is largest\n");
}
