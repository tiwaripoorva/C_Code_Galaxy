#include<stdio.h>
int main(){
    int var,i,j;
    int a[5]={4,5,1,3,9};
    for ( i = 0; i < 5; i++)
    {
       for ( j = i+1; j < 5; j++)
       {
        if (a[i]>a[j])
        {
            var = a[i];
            a[i] = a[j];
            a[j] = var;
        }
       }
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
    
   return 0; 
}