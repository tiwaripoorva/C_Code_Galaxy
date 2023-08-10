/*Enter the temperature in celsius and convert it into fahrenhite.*/
#include<stdio.h>
int main(){
    float tc,tf; 
    printf("Enter temperature in celsius ");
    scanf("%f",&tc);
    tf = (tc * 9/5) + 32;
    printf("temperature in fahrehnite is = %f",tf);

    return 0;

} 