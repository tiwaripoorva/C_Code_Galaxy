#include<stdio.h>
int main()
{
    int n,num,count=1,rem,sum;
    printf("Enter a number");
    scanf("%d",&n);
    while(count<=n){
        num = count;
        sum = 0;
        while(num){
            rem = num%10;
            sum = (rem*rem*rem)+sum;
            num = num/10;
        }
        if(count == sum){
            printf("%d is an armstrong number\n",count);
        }
        count++;
    }
    return 0;
}