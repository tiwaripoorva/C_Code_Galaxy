#include<stdio.h>
int main(){
  int i,j,mat[2][3];
  printf("Enter the elements in matrix");
  for ( i = 0; i < 2; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      printf("mat[%d][%d]",i,j);
      scanf("%d",&mat[i][j]);
    }
   printf("\n"); 
  }
    for ( i = 0; i < 2; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      printf("%d\t",mat[i][j]);
    }
   printf("\n"); 
  }
}