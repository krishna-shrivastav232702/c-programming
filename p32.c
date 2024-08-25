#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum;
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
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
            
        }
        printf("sum of row %d is %d \n",i+1,sum);
    }

}