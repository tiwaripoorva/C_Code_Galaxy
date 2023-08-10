#include<stdio.h>
int main(){
    int row,col;
    for ( row = 1; row <= 5; row++)
    {
        for ( col = 1; col <= 4; col++)
        {
            if (((col==1||col==4)&&(row!=1))||((row==1||row==3)&&(col==2||col==3)))
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