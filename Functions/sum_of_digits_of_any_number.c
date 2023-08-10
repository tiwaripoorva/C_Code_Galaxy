#include<stdio.h>
int digit();
int main(){
    int p = digit();
    printf("sum of digits=%d",p);
}
int digit(){
    int sum=0,num,rem;
    printf("Enter five number:");
    scanf("%d",&num);
    for (int i = 1; i <= 5; i++)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    return sum;
}