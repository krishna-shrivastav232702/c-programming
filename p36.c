#include<stdio.h>
void main()
{
    char a[50],b[50],c[200];
    int i=0,j=0;
    printf("enter first string\n");
    gets(a);
    printf("enter second string \n");
    gets(b);
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++,j++;
    }
    c[i]='\0';
    printf("concatenated string=%s",c);

}