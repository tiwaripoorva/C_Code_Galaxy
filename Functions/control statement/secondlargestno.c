#include<stdio.h>
int main () {
    int num,num1,num2;
    printf("Enter two number ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is greater",num1);
    }
    else{
        printf("%d is greater",num2);
    }
    return 0;
}