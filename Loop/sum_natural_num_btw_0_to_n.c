#include<stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter number up to which find the sum of natural number");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        sum = sum + i;
        printf("%d\n",i);
        i++;
    }
    
    printf("Sum of natural number = %d",sum);
    return 0;
}