#include<stdio.h>
void main()
{
    int i,j,a[10],t;
    for(i=0;i<10;i++)
    {
        printf("enter number : \n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        if(a[i]>a[j])
        {       
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    }
    printf("array after sorting is : \n");
    for(i=0;i<10;i++)
    printf("%d\n",a[i]);
}