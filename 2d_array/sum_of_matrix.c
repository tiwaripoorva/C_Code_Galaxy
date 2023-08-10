#include<stdio.h>
int main(){
    int i,j;
    int arr[3][3],arr2[3][3],sum[3][3];
    printf("Enter values in first matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter values in second matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of two array is:> \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
          sum[i][j] = arr[i][j] + arr2[i][j]; 
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
    for ( j = 0; j < 3; j++){
    printf("%d\t",sum[i][j]);
    }
    printf("\n");
    }
   return 0; 
}