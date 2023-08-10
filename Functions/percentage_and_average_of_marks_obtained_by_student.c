#include<stdio.h>
void result(void);
int main(){
   result(); 
}
void result(void){
    int m1,m2,m3;
    float per,avg;
    //suppose maximum marks is 100
    printf("Enter marks obtained by student in three sub");
    scanf("%d%d%d",&m1,&m2,&m3);
    avg = (m1+m2+m3)/3;
    per = (m1+m2+m3)*100/300;
    printf("average = %f\n",avg);
    printf("percentage = %f",per);
}