#include<stdio.h>
int main(){
    int n,i,arr[1000],sum = 0,mul=1;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element of array:\n");
        scanf("%d",&arr[i]);
    }
    printf("Array of given element is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    for ( i = 0; i < n; i++){
        if(arr[i]%2==0){
        sum = sum + arr[i];
        }
        else{
        mul = mul*arr[i];
        }
    }
    printf("Sum of even number elements present in array is = %d\n",sum);
    printf("Multiplication of odd number elements present in array is = %d\n",mul);
    return 0;
}