#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum=0,pro=1,even,odd;
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
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             if(a[i][j]%2==0)
             {
                sum = sum+a[i][j];
             }
             else
             pro = pro*a[i][j];
        }
    }
    printf("sum of even = %d \n,product of odd =%d \n",sum,pro);
}