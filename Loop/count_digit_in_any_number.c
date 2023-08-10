#include<stdio.h>
int main(){
    int i,num;
    printf("Enter the number");
    scanf("%d",&num);
    i=0; 
    while(num!=0)
    {
        num =  num/10;
        i++;
    }
    printf("total digit = %d",i);
    return 0;
}