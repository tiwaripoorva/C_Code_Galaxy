#include<stdio.h>
int main(){
    int base,exponent,power=1,i=1,expo;
    printf("Enter base");
    scanf("%d",&base);
    printf("Enter exponent");
    scanf("%d",&exponent);
   while (i<=exponent)
   {
    power=power*base;
    i++;
   }
   printf("%d^%d=%d",base,exponent,power);
    return 0;

}
