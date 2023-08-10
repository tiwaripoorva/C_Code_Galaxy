#include <stdio.h>
int sum(int a);
int main(){
    int i;
    printf("Enter five digit number:");
    scanf("%d",&i);
    int k = sum(i);
    printf("sum of digits of %d = %d",i,k);
    return 0;
}
int sum(int a){
    if (a!=0){
        return (a % 10 + sum(a/10));
    }
    else {
        return 0;
    }
}





