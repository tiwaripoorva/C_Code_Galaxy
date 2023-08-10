/*Find second largest number between 3 no using ternary operator*/
#include<stdio.h>
int main()
{
   int x,a,b,c;
   printf("Enter three numbers =");
   scanf("%d%d%d",&a,&b,&c);
   x = (a>=b && a>=c)?((b>=c)?b:c):((a>=c)?a:c);
   printf("Second largest number = %d",x);

return 0;
}