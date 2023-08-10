#include<stdio.h>
#include<math.h>
int power(int a,int b);
int main(){
    int x,y;
    printf("Enter values");
    scanf("%d%d",&x,&y);
   int p = power(x,y);
   printf("%d^%d=%d",x,y,p);
}
int power(int a,int b){
    int p;
    p = pow(a,b);
    return p;
}