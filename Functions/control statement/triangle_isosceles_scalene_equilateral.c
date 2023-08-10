#include<stdio.h>
int main() {
    int s1,s2,s3;
    printf("Enter sides of triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if (s1==s2&&s2==s3)
    {
        printf("Triangle containing given sides is an equilateral triangle");
    }
    else if (s1==s2||s2==s3||s3==s1) {
        printf("Triangle containing given sides is an isosceles triangle");
    }
    else {
        printf("Triangle containing given sides is an scalene triangle");

    }
return 0;   
}