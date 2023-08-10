#include<stdio.h>
int fact(int n);
int main(){
    int n,fac_value;
    printf("Enter number to find factorial:");
    scanf("%d",&n);
    fac_value = fact(n);
    printf("Factorial value=%d",fac_value);
}
int fact(int n){
    int i,fac=1;
    for ( i = 1; i <= n; i++)
    {
        fac = fac*i;
    }
   return fac;
}