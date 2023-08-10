#include<stdio.h>
int main (){
    char c;
    printf("Enter an alphabet");
    scanf("%c",&c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
        printf("%c is vowel",c);
    }
    else {
        printf("%c is consonent",c);
    }
    return 0;
}