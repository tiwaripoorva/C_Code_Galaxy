#include<stdio.h>
int main()
{

int n;

    printf("enter the number:>");
    scanf("%d",&n);
    if(n%5==0 && n%11==0)
    {
        printf("%d is divisble by 5 and 11 ",n);
    }
    else
    {
        printf("%d is not divisible by 5 and 11",n);
    }
    return 0;
}