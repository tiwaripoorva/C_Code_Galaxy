#include<stdio.h>
int main() {
    int i;
    printf("Even number between 1 to 100 are ");
   i = 2;
   while (i<=100)
   {
    if (i%2==0){
        printf("%d\n",i);
    }
    i++;
   }
   
    return 0;
}