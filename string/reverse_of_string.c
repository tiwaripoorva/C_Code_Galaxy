#include<stdio.h>
int main(){
    char name[30];
    puts("Enter characters in string:> ");
    gets(name);
    strrev(name);
    puts(name);
}