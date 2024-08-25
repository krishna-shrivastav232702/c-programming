#include <stdio.h>
void main()
{
    int i;
    char a[50];
    printf("enter your name \n");
    gets(a);
    i = 0;
    while (a[i] != '\0')
        i++;
    printf("total number of characters =%d", i);
}