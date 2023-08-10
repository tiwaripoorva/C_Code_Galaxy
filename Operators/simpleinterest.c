/*Write a program to accept the principal,rate,and number of years and 
find out the simple interest.*/
#include<stdio.h>
int main () {
    float p,t,r,si;
    printf("Enter principal,rate,number of years\n");
    scanf("%f%f%f",&p,&r,&t);

    si = (p*r*t)/100;
    printf("simple interest = %f",si);

return 0;
}
