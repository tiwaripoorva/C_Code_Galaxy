#include<stdio.h>
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    switch (num%2==0)
    {
    case 0:
    printf("%d num is odd",num);
        break;
    
    default:
    printf("%d num is even",num);
        break;
    }

}