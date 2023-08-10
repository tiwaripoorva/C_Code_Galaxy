#include<stdio.h>
int main() {
    int neg,ptv,num;
    printf("Enter number");
    scanf("%d",&num);
    switch (num>0)
    {
    case 0: 
     ptv = (-1)*num;
        printf("Number is negative");
        printf("Positive value of the number is = %d",ptv);
        break;
    case 1:
    neg = (-1)*num;
        printf("Number is positive");
        printf("Negative value of the number is = %d",neg);
        break;
    
    }
}