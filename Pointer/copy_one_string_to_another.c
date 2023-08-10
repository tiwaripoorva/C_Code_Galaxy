#include<stdio.h>
int main(){
    char string1[50],string2[50];
    printf("Enter characters in string 1:- ");
    gets(string1);
    while(*string1)
    {
        *string2 = *string1;
        string1++;
        string2++;
    }
    printf("The copied string is:> ");
    puts(string2);
}