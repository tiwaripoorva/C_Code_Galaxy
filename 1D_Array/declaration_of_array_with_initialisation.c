#include<stdio.h>
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    for (int i = 0; i < 10; i++)
    {
       printf("\nThe value of %d element of array is = %d",i,a[i]);
    }
  return 0;  
}