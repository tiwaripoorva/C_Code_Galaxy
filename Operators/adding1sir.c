/*The policy followed by a company to process customer order is given by the 
following rules : a.If a customer order is less than or equal to that in stock and 
has credit is OK, supply 
.*/
#include<stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER FOR ADDING ONE ");
    scanf("%d",&number);//12345
    int a=number/10;//1234
    int b=((number%10)+1)*1;//5
    int c=a/10;//123
    int d=((a%10)+1)*10;//4
    int e=c/10;//12
    int f=((c%10)+1)*100;//3
    int g=e/10;//1
    int h=((e%10)+1)*1000;//2
    int i=g/10;//0
    int k=((g%10)+1)*10000;
    printf("%d",k+h+f+d+b);
    return 0;
    
}