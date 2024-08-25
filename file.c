#include<stdio.h>
#include<stdlib.h>
void main()
{
    int str1,str2,str3,year;
    FILE *fptr;
    fptr=fopen("filename.txt","r");
    fscanf(fptr,"%s%s%s%d",str1,str2,str3,&year);
    char c=fgetc(fptr);
}