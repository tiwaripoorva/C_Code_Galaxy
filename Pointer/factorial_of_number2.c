#include<stdio.h>
int main(){
    int a,fact=1,i,*p;
    printf("Enter the number to find factorial:>");
    scanf("%d",&a);
    p = &fact;
    for ( i = 1; i <= a; i++)
    {
        *p = *p*i;
    }
    printf("%d",*p);
}