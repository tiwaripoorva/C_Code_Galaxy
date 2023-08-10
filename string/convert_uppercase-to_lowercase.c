#include<stdio.h>
int main() {
    char name[30];
    puts("Enter the content in upper case:>");
    gets(name);
    puts("The name in lower case is :> ");
    strlwr(name);
    puts(name);
}