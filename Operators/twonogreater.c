/*accept two numbers. If the first number is greater than 
second number then print the sum of these numbers otherwise
 print difference between them.*/
#include<stdio.h>
int main()
{
    int a,b,sum,diff;
    printf("Enter first and second number = ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    diff = a-b;
    a>b?printf("sum of numbers = %d",sum):printf("difference of two numbers = %d",diff);

    return 0;


}