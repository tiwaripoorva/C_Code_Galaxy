#include<stdio.h>
int main(){
    int a[5],i;
    for ( i = 0; i <= 4; i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <= 4; i++){
    printf("%d\t",a[i]);
}
    return 0;
}