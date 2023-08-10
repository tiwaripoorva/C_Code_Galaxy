#include<stdio.h>
int main() {
    char c;
    printf("Enter any alphabet");
    scanf("%c",&c);
    if(c>='a' && c<='z') {
        printf("%c is a lower case alphabet",c);
    }
    else {
        printf("%c is a upper case alphabet",c);
    }
    return 0;
}