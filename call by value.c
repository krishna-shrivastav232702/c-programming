#include<stdio.h>
void swap(int* ,int*);
void main()
{
    int a,b;
printf("enter value for a ,b");
scanf("%d%d",&a,&b);
printf("the value before swap is %d %d",a,b);
swap(&a,&b);
}
void swap(int* x,int* y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("the value after swap is %d %d",*x,*y);
}