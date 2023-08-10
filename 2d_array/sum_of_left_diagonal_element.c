#include<stdio.h>
int main(){
    int i,j,n,mat[50][50],sum=0;
    printf("Enter the size of matrix :> \n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i+j==2)
            sum = sum + mat[i][j];
        }
        
    }
    printf("Sum of left element of matrix :> %d\n",sum);
}