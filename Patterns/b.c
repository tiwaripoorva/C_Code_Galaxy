#include<stdio.h>
int main() {
    int row,col;
    for ( row = 1; row <= 6; row++)
    {
        for ( col = 1; col <= 3; col++)
        {
            if((col==1)||((col==2)&&((row==1)||(row==3)||(row==4)||(row==6)))||((col==3)&&((row==2)||(row==5))))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
      printf("\n");  
    }
    return 0;
}  