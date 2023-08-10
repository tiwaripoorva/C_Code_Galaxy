#include<stdio.h>
int sum(int num);
 main(){
    int num;
   printf("Enter the upper limit");
   scanf("%d",&num);
   int p = sum(num);
   printf("sum of numbers=%d",p); 
}
int sum(int num){
    if (num==1)
        return (1);
    else
        return (num+sum(num-1));
}