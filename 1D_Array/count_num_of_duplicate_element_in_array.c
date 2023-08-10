#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
       printf("Enter %d elements in array",n);
       scanf("%d",&a[i]); 
    }
    printf("The array of given elements is :>");
    for ( i = 0; i < n; i++)
    {
       printf("%d\t",a[i]); 
    }  
    for ( i = 0; i < n; i++){
        
    }
}