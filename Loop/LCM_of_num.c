#include<stdio.h>
int main(){
    int n1,n2,max=1;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    while (max>0)
    {
        if(max%n1==0&&max%n2==0)
        {
        printf("LCM of %d and %d is = %d",n1,n2,max);
        break;
        }
        ++max;
    }
    return 0;
}