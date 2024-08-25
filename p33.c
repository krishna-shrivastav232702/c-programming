#include<stdio.h>
void main()
{
    int i;
    char a[50];
    printf("enter your name \n");
    gets(a);
    i=0;
    while(a[i]!=0)
    {
        printf("\n%c",a[i]);
        i++;
    }
}