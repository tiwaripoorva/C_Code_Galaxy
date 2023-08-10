#include<stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter three number");
    scanf("%d%d%d",&num1,&num2,&num3);

    (num1>=num2)&&(num1>=num3)?printf("%d  is greater\n"):printf("%d is less\n")&&(num2>=num1)&&(num2>=num3)?printf("num2 is greater\n"):printf("num2 is less\n")&&(num3>=num1)&&(num3>=num2)?printf("num3 is greater\n"):printf("num3 is less\n");

    return 0;
} 