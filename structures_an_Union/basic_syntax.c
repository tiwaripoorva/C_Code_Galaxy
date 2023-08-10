#include<stdio.h>
union intro
{
    int a;
    char b;
    float c;
}s;
int main(){
    s.a = 72;
    printf("Value of c is :> %c",s.b);
    printf("\n size of operator is:> %d",sizeof(s));
}