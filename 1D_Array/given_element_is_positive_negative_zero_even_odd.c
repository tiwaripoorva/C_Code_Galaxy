#include<stdio.h>
int main(){
    int arr[25],i,pos=0,even=0,odd=0,neg=0;
    for ( i = 0; i < 25; i++)
    {
        printf("Enter the elements of array:");
        scanf("%d",&arr[i]);
    }
    printf("Array of given element is:\n");
    for ( i = 0; i < 25; i++)
    {
        printf("%d\t",arr[i]);
    }
    for ( i = 0; i < 25; i++)
    {
       if(arr[i]>=0)
       {
       pos++;
       }
       else
       {
       neg++;
       }
       if(arr[i]%2==0)
       {
       even++;
       }
       else
       {
       odd++;
       }
    }
    printf("%d elements of array are positive\n",pos);
    printf("%d elements of array are negative\n",neg);
    printf("%d elements of array are even\n",even);
    printf("%d elements of array are odd\n",odd);
}