#include<stdio.h>
int prime(int num);
int main(){
  int num;
  printf("Enter a positive integer");
  scanf("%d",&num);
  prime(num);
}
int prime(int num){
 static int count = 2;
  if (count<=num)
  {
    if(num%count==0)
    {
    printf("%d\n",count);
    num=num/count;
    }
    else
    {
    count++;
    }
  }
  prime(num);
}  


// lcm of two number ;


