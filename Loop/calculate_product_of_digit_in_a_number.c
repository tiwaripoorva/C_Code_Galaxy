#include<stdio.h>
int main() {
    int num,prod=1,rem;
    printf("Enter any number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        rem = num%10;
        prod = prod*rem;
        num = num/10;
    }
    printf("product of digit = %d",prod);
    return 0;
}