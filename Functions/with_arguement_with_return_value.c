#include<stdio.h>
int sum(int a,int b); //function declaration
int main(){
    int x,y,z;
    printf("Enter two numbers:"); //taking inputs
    scanf("%d%d",&x,&y);
    z = sum(x,y); //function call
    printf("The sum is:=%d",z);
}
int sum(int a,int b){
    int c=a+b; //function definition
    return (c); //returning result to the main function 
}