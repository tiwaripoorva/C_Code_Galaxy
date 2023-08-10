#include<stdio.h>
int main() {
    int i,j,r,c,mat[50][50];
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
    printf("The lower matrix of the triangle is :> \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if (j<=i){
            printf("%d\t",mat[i][j]);
        }
        else
        {
            printf("%d\t",0);
        }
        }
        printf("\n");
    }
}