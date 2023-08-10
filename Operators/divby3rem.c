/*Accept the five digit number and write a program to
 find it's remainder after dividing by 3 */
#include<stdio.h>
int main() {
    int num,rem,div;
    printf("Enter a five digit number ");
    scanf("%d",&num);

    rem = num%3;
    printf("reminder of division of given digit by 3 is = %d",rem);
    return 0;
    }
