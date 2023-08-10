#include<stdio.h>
#include<math.h>
int main(){
    int number,count=0,sum=0,local;
    printf("Enter a number to check it is armstrong or not");
    scanf("%d",&number);
    local=number;
    int j = number;
    while (j!=0)
    {
       int remain=number%10;
       count++;
       j=j/10; 
    }
    printf("%d\n",count);
    while (number!=0)
    {
        int ldigit=number%10;
        int a=pow(ldigit,count);
        sum = sum+a;
        number = number/10;
    }
    printf("%d\n",sum);
    if (local==sum)
    {
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    
    return 0;

}