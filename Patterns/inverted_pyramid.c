#include<stdio.h>
int main() {
    int i,j,s;
    for ( i = 1; i <= 6; i++)
    {
      for ( s = 4; s <= (2+i); s++)
      {
         printf(" ");
      }
      for ( j = (2*i-1); j <= 11; j++)
      {
         printf("*");
      }
     printf("\n");  
    }
   return 0; 
}