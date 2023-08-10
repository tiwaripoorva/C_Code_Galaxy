#include<stdio.h>
int main(){
    int arr[8],i,a,count=0;
    for ( i = 0; i < 8; i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    printf("Array of given element is:");
    for ( i = 0; i < 8; i++)
    {
        printf("%d\t",arr[i]);
    }
   // printf("Enter the element to be searched");
    //scanf("%d",&a);
    for ( i = 0; i < 8; i++)
    {
        if(arr[i] == i) 
        count++;
    }
    for ( i = 0; i < 8; i++){
    if (count){
    printf("%d is present %d times in given array",i,count);
    }
    else{
        printf("%d is not present given array",i);
    }
    }
    return 0; 
}