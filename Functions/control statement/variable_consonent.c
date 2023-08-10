#include<stdio.h>
int main() {
    char c;
    printf("Enter character");
    scanf("%c",&c);
switch (c)
{
case 'a':
    printf("Entered character is vowel");
    break;
case 'e':
    printf("Entered character is vowel");
    break;
case 'i':
    printf("Entered character is vowel");
    break;
case 'o':
    printf("Entered character is vowel");
    break;
case 'u':
    printf("Entered character is vowel");
    break;
default:
    printf("Entered character is consonent");
    break;
}
}