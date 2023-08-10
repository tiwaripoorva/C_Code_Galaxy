#include<stdio.h>
#include<string.h>
int main() {
    char apt[10];
    puts("Enter characters in string");
    gets(apt);
    int l = strlen(apt);
    printf("Length of string :> %d",l);
}