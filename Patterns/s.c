#include<stdio.h>
int main() {
    int row,col;
    for ( row = 1; row <= 8; row++)
    {
       for ( col = 1; col <= 4; col++)
       {
        if (((col==1)&&((row==2)||(row==3)||(row==7)))||(((col==2)&&((row==1)||(row==4)||(row==8))))||((col==3)&&((row==5)))||((col==4)&&((row==2)||(row==6)||(row==7))))
        {
            printf("*");
        }
        else {
            printf(" ");
        }
       }
       printf("\n");
    }
   return 0; 
}