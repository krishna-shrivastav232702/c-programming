//by using Call by value
#include<stdio.h>
void swap1(int a, int b)
{
    int swap1;
    printf("\nbefore swap x=%d,y=%d",a,b);
    swap1 = a;
    a = b;
    b = swap1;
    printf("\nafter swap x=%d,y=%d",a,b);
}
//by using call by refrence
void swap2(int *a,int *b)
{
    int swap2;
    swap2 = *a;
    *a = *b;
    *b = swap2;
}
void main()
{
    int x,y;
    printf("enter 2 integers \n");
    scanf("%d%d",&x,&y);
    swap1(x,y);
    swap2(&x,&y);
    printf("\nafter swap2 x=%d,y=%d",x,y);
}