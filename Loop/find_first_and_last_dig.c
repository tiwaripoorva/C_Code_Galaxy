#include<stdio.h>
int main(){
    int f_digit,l_digit,num;
    printf("Enter the number");
    scanf("%d",&num);
    l_digit=num%10;
    while (num>=10)
    {
        num=num/10;
    }
    f_digit=num;
    printf("%d is last digit\n",l_digit);
    printf("%d is first digit",f_digit);
    return 0;
} 