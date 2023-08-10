#include<stdio.h>
int main(){
 int a,b,c,i;
 printf("Enter numbers");
 scanf("%d%d%d",&a,&b,&c);
 for ( i = 1; i <= 10; i++)
 {
   int mul1=i*a;
   int mul2=i*b;
   int mul3=i*c;
 
   printf("%d\t",mul1);
   printf("%d\t",mul2);
   printf("%d\t",mul3);

   printf("\n");
 }
  return 0;
}