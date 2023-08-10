#include<stdio.h>
int prime();
int main(){
    prime();
}
int prime(){
    int num,i;
    printf("Enter number to find factors:");
    scanf("%d",&num);
    for ( i = 2; i <= num; i++)
   {
    while (num%i==0)
    {
      printf("%d\t",i);
      num = num/i;
    }
   }
} 