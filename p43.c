#include<stdio.h>
void sort(int[],int,int);
void main()
{
    int a[100],n,i,key;
    printf("enter size of array \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter number \n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("array of index %d is %d\n",i,a[i]);
    }
    printf("\n enter number to search \n");
    scanf("%d",&key);
    sort (a,n,key);
}

void sort(int a[],int n,int key)
{
    int i,f=0;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        f++;
    }
    if(f==1)
    printf("key found \n");
    else
    printf("key not found \n");
}