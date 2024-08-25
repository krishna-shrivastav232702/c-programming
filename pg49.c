#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_name 100
int compare(const void *a,const void *b)
{
    return strcmp((const char*)a,(const char*)b);
}
int main()
{
 char names[max_name][max_name];
 int numNames=0;
 FILE *fp;
 fp = fopen("student.txt","r");
 if(fp==NULL)
 {
    printf("failed to open file \n");
    return 1;
 }
 char name[max_name];
 while(fgets(name,sizeof(name),fp)!=NULL)
 {
    name[strcspn(name,"\n")]='\0';
    strcpy(names[numNames],name);
    numNames++;
 }
 fclose(fp);
 qsort(names,numNames,sizeof(names[0]),compare);
 FILE *file;
 file =fopen("sorted.txt","w");
 if(file==NULL){
    printf("failed to create a file \n");
    return 1;
 }
 printf("sorted names:\n");
 for( int i=0;i<numNames;i++)
 {
    printf("%s\n",names[i]);
    fprintf(file,"%s",names[i]);
 }
 fclose(file);
 return 0;
}