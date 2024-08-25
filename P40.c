#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter string \n");
    gets(a);
    printf("the string in reverse order =%s",strrev(a));
}