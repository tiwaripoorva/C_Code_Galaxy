#include<stdio.h>
int main(){
    int first[100],sec[100],i,n;
    printf("Enter the size of first array\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the elements of first array:\n");
        scanf("%d",&first[i]);
    }
    printf("First array is:> ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",first[i]);
    }
    //copying elemnts of first array to second
    for ( i = 0; i < n; i++)
    {
        sec[i] = first[i];
    }
    printf("Second array whose elements are copied from first array is:> ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",sec[i]);
    }
}