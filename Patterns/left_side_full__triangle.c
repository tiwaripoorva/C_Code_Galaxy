#include<stdio.h>
int main(){
    int i,j,s;
    for ( i = 1; i <= 5; i++)
    {
        for ( s = i; s <= 4; s++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    for ( i = 1; i<=4 ; i++)
    {
       for ( s = 1; s <= i; s++)
       {
        printf(" ");
       }
       for ( j = i; j<=4 ; j++)
       {
        printf("*");
       }
      printf("\n"); 
    }
    return 0;
}