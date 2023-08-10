#include<stdio.h>
int main(){
    int i,j,r,c,arr1[50][50],arr2[50][50];
    printf("Enter the number of rows and columns :> ");
    scanf("%d%d",&r,&c);
    printf("Enter the values in matrix:>");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
       printf("\n");
    }

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
       printf("\n");
    }
    
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
       printf("\n");
    }

    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < r; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
       printf("\n");
    }

}