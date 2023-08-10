#include<stdio.h>
int main() {
    int num,rev=0;
    printf("Enter number"); //12345
    scanf("%d",&num);
    while (num>0)
    {
        rev = rev*10+num%10;
        num = num/10;
    }
    printf("%d",rev);
    // rev number is 54321
    while (rev>0)
    {
        switch (rev%10) //it gives last digit of reversed number i.e. 1 and print 'one' first.
        {
        case 0:
           printf("zero\t");
            break;
        case 1:
           printf("one\t");
            break;    
        case 2:
           printf("two\t");
            break;
        case 3:
           printf("three\t");
            break;
        case 4:
           printf("four\t");
            break;
        case 5:
           printf("five\t");
            break;
        case 6:
           printf("six\t");
            break;
        case 7:
           printf("seven\t");
            break;
        case 8:
           printf("eight\t");
            break;
        case 9:
           printf("nine\t");
            break;                            
        }
        rev = rev/10; //this condition is applied to stop loop
    }
    return 0;
}