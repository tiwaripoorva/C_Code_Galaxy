#include<stdio.h>
int fact(int n);
int main(){
    int a;
    printf("Enter the number to find factorial:");
    scanf("%d",&a)
    int p=fact(a);
    printf("Factorial value = %d",p);
    return 0; 
}
int fact(int n){
    if (n==0)
    return 0;
    else
    return (n*fact(n-1)); 
}