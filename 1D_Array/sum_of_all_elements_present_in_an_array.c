#include<stdio.h>
int main(){
    int i,n,arr[1000],sum=0;
    printf("Give the size of array:\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the elements in array:\n");
        scanf("%d",&arr[i]);
    }
   for ( i = 0; i < n; i++)
   {
    printf("Array of given element is:\n");
    printf("%d\t",arr[i]);
   }
   for ( i = 0; i < n; i++)
   {
    sum = sum + arr[i];
   }
   printf("Sum of all elements present in array is:%d\n",sum);
   return 0; 
}