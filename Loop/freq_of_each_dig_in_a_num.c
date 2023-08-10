#include<stdio.h>
int main()
{
   int num,freq,count=0,ch;
   printf("Enter number: ");
   scanf("%d",&num);
   printf("Enter digit to check its frequency: ");
   scanf("%d",&freq);
   //int lnumber = num;
   while (num!=0){
      ch = num%10;
      if (ch==freq){
         count++;
      }
      num = num/10;
   }
   printf("%d",count);
   return 0;
}