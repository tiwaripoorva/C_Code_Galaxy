#include<stdio.h>
int main(){
    int a,b;
    printf("Give value of a");
    scanf("%d",&a);
    printf("Give value of b");
    scanf("%d",&b);
    int *ap,*bp;
    ap = &a;
    bp = &b;
    printf("Sum of two numbers = %d",*ap+*bp);
}