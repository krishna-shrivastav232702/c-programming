#include <stdio.h>
void main()
{
    int a[10], i, key, f = 0;
    printf("enter a value to be searched");
    scanf("%d", &key);
    for (i = 0; i < 10; i++)
    {
        printf("enter value :\n");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (key == a[i])
        {
            printf("the value to be searched is in the index %d \n", i);
            f = 1;
            
        }
    }
    if (f == 0)
    {
        printf("Not Found!\n");
    }
}