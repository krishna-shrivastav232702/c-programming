#include<stdio.h>
void main()
{
    char a[40],b[40];
    int i=0;
    printf("enter first string \n");
    gets(a);
    while(a[i]!=0)
    {
        b[i]=a[i];
        i++;
    }
    b[i]=0;
    printf("the string is %s",b);

}