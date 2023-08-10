#include<stdio.h>
int main() {
   int number,rev = 0,temp_number,rem;
   printf("Enter a number to check number pallindrome");
   scanf("%d",&number);
   temp_number = number;
   while (number > 0)
   {
    rem = number%10;
    rev = rev*10+rem;
    number = number/10;
   }
   (temp_number == rev)?printf("number is pallindrome"):printf("number is not pellindrome");

   
    return 0;
}