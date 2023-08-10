/*A five digit number is entered through the keyboard.Write a program to obtain
reverse of it and determine whether obtain no is equal to original number. */
#include<stdio.h>
int main() {
    int rev = 0,num,rem,t;
    printf("Enter a five digit number");
    scanf("%d",&num);
    t = num;

    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;  

    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;

    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;

    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;

    rem = num%10;
    rev = rev*10 + rem;
    num = num/10;

    printf("the reverse number is = %d\n",rev);

    (rev == t)?printf("rev is equal to number"):printf("rev is not equal to num");

   return 0 ;
 
}