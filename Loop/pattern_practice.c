#include<stdio.h>
int main(){
    int i,s,j;
    for ( i = 1; i <= 4; i++)
    {
       for ( s = 1; s <= (4-i); s++)
       {
        printf(" ");
       }
       for ( j = 1; j <= (2*i-1); j++)
       {
        int k = 1;
        printf("%d",k);
        k++;
       }
       printf("\n");
    }
    return 0;
}