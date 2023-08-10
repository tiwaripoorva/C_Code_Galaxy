#include<stdio.h>
int product(float i,int j);
int main (){
    float p,a;
    int b;
    printf("Enter two number=");
    scanf("%f%d",&a,&b);
    p = product(a,b);
    printf("%f",p);
}
int product(float i,int j){
    float p = i*j;
    return (i*j);
}