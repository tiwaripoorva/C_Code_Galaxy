#include<stdio.h>
int main() {
    int sum,lar,a,b,c;
    printf("Enter three sides of triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        lar=a;
        sum = b+c;
        printf("triangle is valid");
    }
    if(b>c&&b>a){
        lar=b;
        sum = a + c; 
        printf("triangle is valid");
    }
    if(c>a&&c>b){
        lar=c;
        sum = b + a;
        printf("triangle is valid");
    }
   else printf("triangle is not valid");
    return 0;
}