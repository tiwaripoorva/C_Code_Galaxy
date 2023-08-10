#include<stdio.h>
int main() {
    int i=1,n,factors;
    printf("Enter number for factorisation");
    scanf("%d",&n);
    while(n>0&&i>0){
        factors=n/i;
        if (n%i==0){
            printf("factors of %d is = %d\n",n,factors);
           }
        i++;
    }
    return 0;
}