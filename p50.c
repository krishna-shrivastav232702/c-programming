#include<stdio.h>
struct student{
    char name[50];
    int per,rn;
};
void dispaly(int* ,int*);
int main()
{
    struct student s1;
    printf("enter name \n");
    gets(s1.name);
    printf("enter roll no \n");
    scanf("%d",&s1.rn);
    printf("enter percentage:\n");
    scanf("%d",&s1.per);
    display(&s1.rn,&s1.per);
    return 0;
}
void display(int *s1.rn,int *s1.per)
{
printf("roll no %d",s1.rn);
printf("percentage %d",s1.per);
}

