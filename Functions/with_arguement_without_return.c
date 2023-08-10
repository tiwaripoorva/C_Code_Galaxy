#include<stdio.h>
void sum (int a,int b); //function declaration
int main(){
    int x,y;
   printf("Enter two numbers:"); //taking inputs
   scanf("%d%d",&x,&y); 
   sum(x,y); //function call
}
void sum(int a,int b) {
    int c = a+b; //function definition
    printf("The sum is=%d",c); //priniting result
}