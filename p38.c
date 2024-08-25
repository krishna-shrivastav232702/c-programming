#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,f=0;
    printf("given number \n");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f++;
            printf("it is not prime \n");
            exit(0);
        }
    }
    if(f==0)
    printf("it is prime"); 
    
}