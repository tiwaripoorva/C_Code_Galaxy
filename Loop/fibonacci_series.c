#include<stdio.h>
int main(){
    int a,b,c,n,count;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("%d\t",a);
    printf("%d\t",b);
    count == 2;
    while (count<n)
    {
        c = a+b;
        count = count + 1;
        printf("%d\t",c);
        a = b;
        b = c;
    }
   return 0; 
}