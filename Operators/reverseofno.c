/*If a five digit number is entered through keyboard.write a number to reverse it.*/
#include<stdio.h>
int main () {
    int rev = 0,num,rem;
    printf("Enter a five digit number");
    scanf("%d",&num);

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

    printf("the reverse number is = %d",rev);

    return 0;
}
