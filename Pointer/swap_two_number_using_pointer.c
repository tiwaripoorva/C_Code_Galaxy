#include<stdio.h>
int main() {
    int a,b;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);
    int *ap,*bp;
    ap = &a;
    bp = &b;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The number after swapping:-a = %d, b = %d",*ap,*bp);
}