#include<stdio.h>
void natural(int n);
int main(){
    int n=1;
    printf("Enter the limit:");
    scanf("%d",&n);
    natural(n);
}
void natural(int n){
    if(n<=10){
        printf("%d",n);
        natural(n+1);
    }
}