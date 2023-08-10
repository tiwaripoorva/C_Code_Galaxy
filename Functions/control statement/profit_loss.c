#include<stdio.h>
int main() {
    int sp,cp,loss,profit;
    printf("ENTER SELLING PRICE AND COST PRICE");
    scanf("%d%d",&sp,&cp);
    if (sp-cp>0){
        printf("gain profit");
    }
    else {
        printf("gain loss");
    }
    return 0;
}