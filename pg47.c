#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("file1.txt","r");
    char str[50];
     while(fgets(str,50,fp)!=NULL)
     {
        printf("%s\n",str);
     }
}