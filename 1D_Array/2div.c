#include<stdio.h>
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[50],i;
    printf("Decimal number are\n");
    for ( i = 0; i <= 9; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Decimal number divisible by 2 are");
    for ( i = 0; i <= 9; i++)
    {
        if (a[i]%2==0)
        {
            b[i] = a[i];
            printf("%d\t",b[i]);
        }
    }
    
}