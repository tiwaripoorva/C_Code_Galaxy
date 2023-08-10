/*program to check whether input number is even or odd*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    (num%2==0)?printf("Entered number is even\n"):printf("Entered number is odd\n");
    (num>0)?printf("number is positive\n"):printf("number is negative\n");
    return 0;
}