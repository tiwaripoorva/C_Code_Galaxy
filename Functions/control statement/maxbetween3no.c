#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
    {
        printf("%d is greater",num1);
    }
    if (num2>num3 && num2>num1){
        printf("%d is greater",num2);
    }
    if (num3>num2 && num3>num1){
        printf("%d is greater",num3);
    }
    return 0;
}