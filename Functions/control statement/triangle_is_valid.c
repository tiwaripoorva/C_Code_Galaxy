#include<stdio.h>
int main () {
    int ang1,ang2,ang3,sum;
    printf("Enter three angles of triangle");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    sum = ang1 + ang2 + ang3;
    if (sum==180){
        printf("triangle is valid");
    }
    else {
        printf("triangle is not valid");
    }
    return 0;
}