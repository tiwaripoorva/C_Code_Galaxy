#include<stdio.h>
int main(){
    int i=1,n,count=0;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("Entered number is prime %d",n);

    }
    else
    {
        printf("number is not a prime");
    }
    

    return 0;
}