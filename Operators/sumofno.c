/*If a five digit number is input through the keyboard. Write a program to find the sum of digits.*/
#include<stdio.h>
int main () {
    int rem,num,sum = 0;
    printf("Enter a five digit number");
    scanf("%d",&num);

    
    rem = num % 10;//rem = 12345 % 10 = 5
    sum = sum + rem;//sum = 0 + 5
    num = num/10;//num = 12345/10 = 1234

    rem = num % 10;//4
    sum = sum + rem;//4+5=9
    num = num/10; //1234/10=123

    rem = num % 10;//3
    sum = sum + rem;//4+5+3=12
    num = num/10;

    rem = num % 10;//2
    sum = sum + rem;//4+5+3+2=14
    num = num/10;

    rem = num % 10;//1
    sum = sum + rem;//4+5+3+2+1=15
    num = num/10;

    printf("sum of digits =%d",sum);

    return 0;

}