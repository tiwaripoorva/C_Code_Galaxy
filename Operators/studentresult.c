/*Accept marks of five subject then find percentage of it.*/
#include<stdio.h>
int main() {
int m1,m2,m3,m4,m5,sum;
float per;
printf("Enter marks obtain in five subjects");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum = m1 + m2 + m3 + m4 + m5;
printf("aggregate marks = %d\n",sum);
per = (sum*100)/500;
printf("total percentage = %f",per);
return 0;

}