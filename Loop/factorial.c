#include<stdio.h>
int main() {
    int num,i,fact=1;
    printf("Enter number to calculate factorial");
    scanf("%d",&num);
   for ( i = 1; i <= num; i++)
   {
    fact=fact*i;
   }
  printf("The factorial of given  number is %d",fact);
  return 0; 
}