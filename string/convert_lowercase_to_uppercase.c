#include<stdio.h>
int main() {
    char name[15];
    puts("Enter the content in lower case:> ");
    gets(name);
    puts(name);
    puts("The name in upper case is :> ");
    strupr(name);
    puts(name);
}