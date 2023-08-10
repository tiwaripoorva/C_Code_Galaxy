#include<stdio.h>
int main(){
    char firstname[50];
    char lastname[50];
    puts("Enter the first name:> ");
    gets(firstname);
    puts("Enter the last name:> ");
    gets(lastname);
    puts("Characters after merging two string:> ");
    strcat(firstname,lastname);
    puts(firstname);
}