#include<stdio.h>
int main(){
    int n,i,arr[1000],max,min,sum;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element of array:\n");
        scanf("%d",&arr[i]);
    }
    printf("Array of given element is:");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
	min=max=arr[0];
	/*we considered that max and min values are stored in a[0] or we can say 
	that a[0]th element is max and min when the value of i get incremented 
	in the loop applied below the max value get store in a[0]*/
	for ( i = 0; i < n; i++)
	{
		if (arr[i]>max)
			max=arr[i];	
		if (arr[i]<min)
			min = arr[i];
	}
	printf("Largest number = %d\n",max);
	printf("Smallest number = %d\n",min);
	sum = max + min;
	printf("Sum of largest and smallest number = %d\n",sum);
	return 0;
	}