#include<stdio.h>
int main() {
    int nday,day,week,month,year;
    printf("Enter number of days");
    scanf("%d",&nday);
    year = nday/365;
    month = (nday%365)/30;
    week = ((nday%365)%30)/7;
    day = (((nday%365)%30)%7);

   printf("days to year = %d\n",year);
   printf("days to month = %d\n",month);
   printf("days to week = %d\n",week);
   printf("days to day = %d\n",day);
   return 0;

}