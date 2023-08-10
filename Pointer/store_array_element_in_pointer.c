#include<stdio.h>
int main(){
    int arr[100],i,n,sum = 0;
    int *p;
    p = arr;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements in array:");
    for ( i = 0; i < n; i++)
    {
        printf("element arr[%d] - ",i);
        scanf("%d",arr+i);
    }
    printf("The array of given element is:>");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",*arr+i);
    }
    printf("Sum of all elements of array is :> \n");
    for ( i = 0; i < n; i++)
    {
        sum = sum + *p;
        p++;
    }
    printf("%d\t",sum);
}