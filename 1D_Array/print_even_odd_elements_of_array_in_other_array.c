#include<stdio.h>
int main(){
    int i,n,num[100],even[100],odd[100],j=0,k=0;
    printf("Enter th size of array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter %d elements of array\n",n);
        scanf("%d",&num[i]);
    }
    printf("Array of given element is :> ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        if (num[i]%2==0){
            even[j] = num[i];
            j++;}
        else{
            odd[k] = num[i];
            k++;
    }}
    printf("Array containing even number element:>\n");
    for ( i = 0; i < j; i++)
    {
        printf("%d\t",even[i]);
    }
    printf("\n");
    printf("Array containing odd number element:>\n");
    for ( i = 0; i < k; i++)
    {
        printf("%d\t",odd[i]);
    }
}