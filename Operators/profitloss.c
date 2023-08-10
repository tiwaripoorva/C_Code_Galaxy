/*If selling price and cost price is entered through keyboaed.Find custumor has gain profit or loss.*/
#include<stdio.h>
int main() {
    int cp,sp,profit,loss;
    printf("Enter cost price\n");
    scanf("%d",&cp);
    printf("Enter selling price\n");
    scanf("%d",&sp);
    profit = sp-cp;
    (profit>0)?printf("customer had gain profit of = %d",profit):printf("customer had gain loss");
    return 0;
}