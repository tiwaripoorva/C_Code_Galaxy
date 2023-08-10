//sorting from minimum to maximum 
#include<stdio.h>
int main(){
    int arr[100],n,i,j,temp;
    printf("Enter the size array:-\n");
    scanf("%d",&n);
    printf("Enter tha elements in array:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("Elements %d -: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array of given element is:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The sorted array is:-\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
        
    }
     for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}