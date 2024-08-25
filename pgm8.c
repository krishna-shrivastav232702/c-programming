#include <stdio.h>
void main()
{
    int ch;
    printf("enter numbersfrom 1-5\n  ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday\n");
    case 3:
        printf("tuesday\n");
    case 4:
        printf("wednesday\n");
        break;
    case 5:
        printf("thursday");
        break;
    }
}