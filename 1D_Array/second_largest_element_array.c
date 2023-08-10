#include<stdio.h>
int main(){
    int i,n,j,num[100],lar=0,lar2nd=0;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter %d elements in array:> \n",n);
  
  {}  for ( i = 0; i < n; i++)
    {
        printf("Element - %d\n",i);
        scanf("%d",&num[i]);
    }
    printf("Array of given element is:> ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",num[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(lar<num[i]){
            lar=num[i];
            j = i; //storing largest number into j
        }
    }
    for ( i = 0; i < n; i++)
    {
        if (i==j)
        {
            i--;
            i++;
        }
        else
        {
            if (lar2nd<num[i])
            {
             lar2nd = num[i];  
            }
        }
    }
   printf("The Second largest element in the array is :  %d \n\n", lar2nd); 
}