#include<stdio.h>

int main()
{
    //suppose cost of each item is 100
    int credit,order,stock=500;
    printf("Enter stock company have ");
    scanf("%d",&stock);
    printf("Enter customer order ");
    scanf("%d",&order);
    printf("Enter amount credited by customer ");
    scanf("%d",&credit);
   if (credit>=100*order&&order<=stock)
   {
   printf("sir/ma'am we will deliver your order");
   }
   else if (credit<=100*order&&order<=stock)
   {
    printf("sir/ma'am we cannot order please pay the whole amount");
   }
   else  {
    printf("Sir/ma'am your order will be shipped soon");
   }

 return 0;  
   
}