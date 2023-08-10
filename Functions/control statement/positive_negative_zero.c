#include<stdio.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    switch (num>0)
    {
    case 0:
        printf("Entered number is negative");
        break;
    case 1:
        printf("Entered number is positive");
        break;
    default:
    printf("Entered number is zero");
        break;
    }
}