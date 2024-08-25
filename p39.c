#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    printf("enter string in upper case \n");
    gets(a);
    printf("string in lower case = %s",strlwr(a));
}