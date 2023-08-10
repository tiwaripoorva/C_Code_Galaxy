#include<stdio.h>
int main () {
    char c;
    printf("Enter any key");
    scanf("%c",&c);
    if ((c >= 'a') && (c <= 'z')) {
        printf("%c is an alphabet",c);
    }
    else if ((c>='0') && (c<='9')){
        printf("%c is a digit",c);
    }
    else {
        printf("%c is a special symbol",c);
    }
    return 0;
}