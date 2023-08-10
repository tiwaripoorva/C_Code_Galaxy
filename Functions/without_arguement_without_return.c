#include<stdio.h>
void sum(void); //function declaration
int main() {
    sum(); //function call
}
void sum(void){
    int a,b,c;
    printf("Enter two numbers: "); //taking inputs
    scanf("%d%d",&a,&b);
    c = a+b; //function definition
    printf("sum of two number is = %d",c); //not returnig result value therefore we have to print result
}