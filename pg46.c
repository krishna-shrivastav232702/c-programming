#include<stdio.h>
struct student {
    int rollnum;
    char n[50];
    int m1;
    int m2;
    int m3;
    int totalmarks ;
};
 void inp_det(struct student students[],int n )
{
    int i;
    printf("enter the student details :\n");
    for(i=0;i<n;i++)
    {
        printf("student :%d\n",i+1);
        printf("roll number :\n");
        scanf("%d",&students[i].rollnum);
        printf("name:\n");
        scanf("%s",students[i].n);
        printf("marks in subject 1:");
        scanf("%d",&students[i].m1);
        printf("marks in subject 2:");
        scanf("%d",&students[i].m2);
        printf("marks in subject 3:");
        scanf("%d",&students[i].m3);
    }
}
void compute(struct student students[],int n)
{
    for(int i=0;i<n;i++)
    {
        students[i].totalmarks=students[i].m1+students[i].m2+students[i].m3;
    }
}
void print(struct student students[],int n)
{
    printf(" the student details are \n");
    for( int i=0;i<n;i++)
    {
        printf("student %d\n",i+1);
        printf("roll number %d\n",students[i].rollnum);
        printf("name %s\n",students[i].n);
        printf("marks of sub 1 %d\n",students[i].m1);
        printf("marks of sub 2 %d\n",students[i].m2);
        printf("marks of sub 3 %d\n",students[i].m3);
        printf("total marks %d\n",students[i].totalmarks);
    }
}
void main()
{
    int n;
    printf("enter the number of students:\n");
    scanf("%d",&n);
    struct student students[n];
    inp_det(students,n);
    compute(students,n);
    print(students,n);
}