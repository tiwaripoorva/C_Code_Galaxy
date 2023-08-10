#include<stdio.h>
struct prod
{
    char prod_name[50];
    int qty;
    float price;
    float amount;
};
void main(){
    struct prod item;
    struct prod *itm;
    itm = &item;
    printf("Enter product name - ");
    gets(itm->prod_name);
    printf("--------------------------------\n");
    printf("Enter quantity of product - ");
    scanf("%d",&itm->qty);
    printf("--------------------------------\n");
    printf("Enter the price of per prodect - ");
    scanf("%f",&itm->price);
    printf("--------------------------------\n");
    itm->amount = itm->qty * itm->price; 
    printf("--------------------------------\n");
    printf("The product name - %s\n",itm->prod_name);
    printf("Quantity of product - %d\n",itm->qty);
    printf("The price per product - %f\n",itm->price);
    printf("Total amount to pay - %f\n",itm->amount);
    printf("---------------------------------------\n");
}