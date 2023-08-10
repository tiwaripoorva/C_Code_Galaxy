#include<stdio.h>
struct employ
{
    char name[20];
    int age;
    int employ_id;
    char post[100];
    float salary;
}employ[];

void main(){
    printf("The data of all employe are\n");
    for (int i = 1; i <= 2; i++)
    {
    printf("Enter the name of %d employ -: \n",i);
    scanf("%s",employ[i].name);
    printf("Enter the age of %d employ -: \n",i);
    scanf("%d",&employ[i].age);
    printf("Enter the employ id of %d employ -: \n",i);
    scanf("%d",&employ[i].employ_id);
    printf("Enter the post of %d employ -: \n",i);
    scanf("%s",employ[i].post);
    printf("Enter the salary of %d employ -: \n",i);
    scanf("%f",&employ[i].salary);
    }
    for (int i = 1; i <= 2; i++)
    {
    printf("The name of %d employ -: %s\n",i,employ[i].name);
    printf("The age of %d employ -: %d\n",i,employ[i].age);
    printf("The employ id of %d employ -: %d\n",i,employ[i].employ_id);
    printf("The post of %d employ -: %s\n",i,employ[i].post);
    printf("The salary of %d employ -: %f\n",i,employ[i].salary);
    }
}