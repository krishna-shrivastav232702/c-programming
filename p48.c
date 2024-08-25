#include<stdio.h>
struct student {
    int rn;
    char name[50];
    float m1;
    float m2;
    float m3;
    float tm;
};
int main()
{
    int n;
    printf("enter no of students \n");
    scanf("%d",&n);
    struct student std;
        printf("enter roll no \n");
        scanf("%d",&std.rn);
        printf("enter name \n");
        scanf("%s",&std.name);
        printf("enter marks of sub 1,2,3 \n");
        scanf("%f%f%f",&std.m1,&std.m2,&std.m3);
        std.tm=std.m1+std.m2+std.m3;
        printf("student details:\n");
        printf("roll no:%d\n",std.rn);
        printf("name : %s\n",std.name);
        printf("total marks of roll no %d  is %f ",std.rn,std.tm);     
}