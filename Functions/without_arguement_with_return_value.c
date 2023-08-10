#include<stdio.h>
int sum(); //function declaration
int main(){
    int z = sum(); //function call
    printf("The sum is=%d",z);
}
int sum(){
    int a,b,c;
    printf("Enter two numbers:"); //taking inputs
    scanf("%d%d",&a,&b);
    c = a + b; //function definition
    return (c); //returning results value to the main function
}