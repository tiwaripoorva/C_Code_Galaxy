#include<stdio.h>
void roman(int year);
int main(){
    int n;
    printf("Enter year to convert it into its roman equivalent:");
    scanf("%d",&n);
    roman(n);
    return 0;
}
void roman(int year){
    while (year){
    if (year>=1000){
        printf("m");
        year = year-1000;
    }
    else if(year>=500){
        printf("d");
        year = year-500;
    }
    else if(year>=100){
        printf("c");
        year = year-100;
    }
    else if(year>=50){
        printf("l");
        year = year-50;
    }
    else if(year>=10){
        printf("x");
        year = year-10;
    }
    else if(year<=5){
        printf("v");
        year = year-5;
    }
    else if(year>=1){
        printf("i");
        year = year-1;
    }
    }
    printf("\n");
}