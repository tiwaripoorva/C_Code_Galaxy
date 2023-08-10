#include<stdio.h>
int main(){
    int i,n,j,num[100],small=0,small2nd=99;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter %d elements in array:> \n",n);
  
  for ( i = 0; i < n; i++)
    {
        printf("Element - %d\n",i);
        scanf("%d",&num[i]);
    }
    printf("Array of given element is:> ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",num[i]);
    }
    small = num[i];
    for ( i = 0; i < n; i++)
    {
        if(small>num[i]){
            small=num[i];
            j = i; //storing smallest number into j
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
            if (small2nd>num[i])
            {
             small2nd = num[i];  
            }
        }
    }
   printf("The Second smallest element in the array is :  %d \n\n", small2nd); 
}