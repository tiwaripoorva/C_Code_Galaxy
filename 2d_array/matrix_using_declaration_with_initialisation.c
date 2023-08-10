#include<stdio.h>
int main(){
    int i=0,j=0;
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("elements of given matrix is:>\n");
        for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Value of element mat[%d][%d] = %d\n",i,j,mat[i][j]);
        }
       printf("\n"); 
    }
    
}