#include<stdio.h>
struct cricketer
{
    char name[50];
    int age;
    int match;
    int avg_run;
}ind[3] = {{"Virat Kohli",32,116,112375},{"Rohit Sharma",28,217,2345680},{"Hardik Pandya",36,273,42178954}};
void record(){
    for (int i = 0; i < 3; i++)
    {
    printf("The name of cricketer is:> %s\n",ind[i].name);
    printf("The age of %s is:> %d\n",ind[i].name,ind[i].age);
    printf("Number of matches played by %s:> %d\n",ind[i].name,ind[i].match);
    printf("Average run scored by %s:> %d\n",ind[i].name,ind[i].avg_run);
    printf("-----------------------------------------------------------\n");
}
}
void avg_score(){
    int arr[100],i,j,temp;
     for (int i = 0; i < 3; i++)
    {
    arr[3] = ind[i].avg_run;
    }
    for ( i = 0; i < 3; i++)
    {
       for ( j = i+1; j < 3;j++)
       {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
       }
       
    }
    for ( i = 0; i < 3; i++)
    {
     printf("%d\t",arr[i]);
    }
    
}
int main(){
    record();
    avg_score();
}