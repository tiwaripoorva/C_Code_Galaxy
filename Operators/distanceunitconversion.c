/*The distance between two cities is entered through the keyboards.
Write a program to convert and print this distance in metres,feet,inches and centimeters.*/

#include<stdio.h>
int main () {
    
    float dis,meter,cm,inch,ft;

    printf("Enter distance between two cities(in kms)");
    scanf("%f",&dis);

    meter = dis*1000;
    cm = dis*1000*100;
    inch = dis*39370.1;
    ft = dis*3280.84;//inch*0.08333,1inch = 0.8333feet

    printf("distance of cities in two cities(in meter) = %f\n",meter);
    printf("distance of cities in two cities(in cm) = %f\n",cm);
    printf("distance of cities in two cities(in inch) = %f\n",inch);
    printf("distance of cities in two cities(in feet) = %f\n",ft);
     
    return 0;
}