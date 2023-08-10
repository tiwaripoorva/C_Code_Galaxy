#include<stdio.h>
int main() {
    char spt[20];
    puts("Enter characters in string:> ");
    gets(spt);
    printf("Separate character of the strings :> ");
    for (int i = 0; i < strlen(spt); i++)
    {
        printf("'%c'\t\t",spt[i]);
    }
    
}