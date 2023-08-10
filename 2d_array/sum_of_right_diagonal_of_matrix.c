#include<stdio.h>
int main()
{
    int i,j,n,sum=0,arr[50][50];
    printf("Input the size of the square matrix:> \n");
    scanf("%d",&n);
    printf("Enter the values in matrix \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j){
            sum = sum + arr[i][j];
            }
        }
        printf("\n");
    }
    printf("Given matrix is :> \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    printf("Sum of right diagonal elements > %d\n",sum);
}   
