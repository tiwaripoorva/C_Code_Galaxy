#include<stdio.h>
int main() {
    int i=1,n1,n2,hcf;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    while (i<=n1||i<=n2)
    {
       if(n1%i==0&&n2%i==0)
        hcf = i;
        i++;
       
    }
    printf("HCF of %d and %d is = %d",n1,n2,hcf);
   return 0;
}