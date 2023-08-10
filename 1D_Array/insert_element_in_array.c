#include<stdio.h>
int main(){
    int i,n,a[100],pos,element;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements in array:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("element %d - \n",i);
        scanf("%d",&a[i]);
    }
    printf("Ther array of given element is:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("Enter the position to insert element:-\n");
    scanf("%d",&pos);
    printf("Enter new element value\n");
    scanf("%d",&element);
    n++;
    for (int i = n; i <= pos ; i--)
    {
        a[i] = a[n-1];
    }
    a[pos-1] = element;
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}