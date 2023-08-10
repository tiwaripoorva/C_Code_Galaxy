#include<stdio.h>
int main() {
    float tot,unit;
    printf("Enter total units consume");
    scanf("%f",&unit);
    switch (unit<=50)
    {
    case 1:
       tot = 0.50*unit;
       printf("You have to pay =%f",tot);
    case 0:   
    switch (unit<=150)
    {
    case 1:
    tot = 0.75*unit;
    printf("You have to pay =%f",tot);
    case 0:
    tot = 1.20*unit;
    printf("you have to pay =%f",tot);

    }
    default:
    printf("you have to pay = %f",tot);
        break;
    }
}
