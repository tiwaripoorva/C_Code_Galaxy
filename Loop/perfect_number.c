#include<stdio.h>
int main(){
    int i=1,sum=0,n;
    printf("Enter any number: \n");
    scanf("%d",&n);
    while(i<n){
        
        if(n%i==0) 
            sum = sum+i;
            i++;
        
    }
    if (sum == n){
        printf("%d is a perfect number",n);
    }
    else{
         printf("%d is not a perfect number",n);
    }
return 0;
}
 