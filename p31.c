#include<stdio.h>
void main()
{
    int a[3][3],i,j,key,f=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("enter value for 2d array :\n");
          scanf("%d",&a[i][j]);
        }
    }
    printf("2d array elements are: \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d \t",a[i][j]);
    }
    printf("enter number to search \n");
    scanf("%d",&key);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==key)
            {
                printf("elements found at a[%d][%d]",i,j);
                f++;
            }
        }
    }
    if(f==0)
     printf("element not found");
}
    
