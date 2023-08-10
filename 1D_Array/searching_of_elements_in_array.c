#include<stdio.h>
int main(){
    int arr[25],i,a,count=0;
    for ( i = 0; i < 25; i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    printf("Array of given element is:");
    for ( i = 0; i < 25; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&a);
    for ( i = 0; i < 25; i++)
    {
        if(arr[i] == a) 
        count++;
    }
    if (count){
    printf("%d is present %d times in given array",a,count);
    }
    else{
        printf("%d is not present given array",a);
    }
    return 0; 
}