#include<stdio.h>
int main()
{
    int array1[10][10],array2[10][10],mul[10][10];
    int i,j,k,a,b,c,d;
    printf("Enter the order of first matrix:- ");
    scanf("%d%d",&a,&b);
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            scanf("%d",&array1[i][j]);
        }
        
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            printf("%d",array1[i][j]);
        }
        printf("\n");
        
    }
    printf("Enter the order of second matrix:- ");
    scanf("%d%d",&c,&d);
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < d; j++)
        {
            scanf("%d",&array2[i][j]);
        }
        //printf("\n");
    }
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < d; j++)
        {
            printf("%d",array2[i][j]);
        }
        printf(("\n"));
    }
  printf("\n");

    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < d; j++)
        {
            mul[i][j]=0;
            for ( k = 0; k < b; k++)
            {
                mul[i][j]=(mul[i][j]+((array1[i][k])*(array2[k][j])));
            }
            
        }
        
    }
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < d; j++)
        {
            printf(" %d ",mul[i][j]);
        }
        printf("\n");
    }
}