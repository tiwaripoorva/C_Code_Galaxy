#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter number");
    scanf("%d",&num);
   for ( i = 2; i <= num; i++)
   {
    while (num%i==0)
    {
      printf("%d\t",i);
      num = num/i;
    }
   }
  return 0;
}