#include<stdio.h>
int main() {
    char str1[30],str2[30];
    puts("Enter the characters");
    gets(str1);
    puts("Enter the characters");
    gets(str2);
    if (strncmp(str1,str2) == 0)
    printf("Strings are equal");
    else
    printf("Strings are not equal");
}