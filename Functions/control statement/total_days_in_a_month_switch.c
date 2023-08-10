#include<stdio.h>
int main() {
    int month,days;
    printf("Enter number of days");
    scanf("%d",&days);
switch (month)
{
case 30:
switch (days)
{
case 1:
printf("Month is january");
    break;
case 2:
printf("Month is March");
    break;
case 3:
printf("Month is May");
    break;        
case 4:
printf("Month is july");
    break;
case 5:
printf("Month is August");
    break;
case 6:
printf("Month is October");        
    break;
case 7:
printf("Month is december");        
    break;    
}
case 31:
switch (days)
{
case 8:
    printf("Month is April");
    break;
case 9:
    printf("Month is June");
    break;
case 10:
    printf("Month is September");
    break;
case 11:
    printf("Month is November");
    break;          

}

    default:
    printf("Month is february");
}
}