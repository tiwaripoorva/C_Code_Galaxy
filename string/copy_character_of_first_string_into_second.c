#include<stdio.h>
#include<string.h>
int main() {
    char str1[50],str2[50];
    printf("Enter characters in the first string");
    gets(str1);
    strcpy(str2,str1);
    printf("\nString 2 = %s",str2);
}