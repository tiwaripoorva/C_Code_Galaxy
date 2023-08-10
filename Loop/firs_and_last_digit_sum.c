#include<stdio.h>
int main() {
    int num,l_digit,f_digit,sum=0;
    printf("Enter any number");
    scanf("%d",&num);
    l_digit=num%10;
    while(num>=10){
        num = num/10;
    }
    f_digit=num;
    sum=l_digit+f_digit;
    printf("sum first and last digit = %d",sum);
    return 0;
}
