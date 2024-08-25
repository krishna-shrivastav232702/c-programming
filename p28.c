#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    printf("enter number \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("2d array elements are : \n");
    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}