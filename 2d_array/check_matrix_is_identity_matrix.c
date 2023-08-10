#include<stdio.h>
int main() {
    int i,j,r,c,mat[50][50],ide[i][j],sum = 0;
    printf("Enter the size of matrix :>\n");
    scanf("%d%d",&r,&c);
    printf("Enter value in matrix:> \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Elements - mat[%d][%d]",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    printf("Given array is :> \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("Given array is :> \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if (i==j)
            printf("1",ide[i][j]);
            else
            printf("0",ide[i][j]);
        }
        printf("\n");
    }
   if (mat[i][j]==ide[i][j]) 
        {
            printf("%d is an identity matrix",mat[i][j]);
        }
    else 
        {
            printf("%d is not an identity matrix",mat[i][j]);
        } 
    
}