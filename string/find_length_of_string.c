#include<stdio.h>
int main() {
    char name[50],
    int l=0;
    printf("Input the string:> ");
    scanf("%s",name);
    while(name[l]!='\0')
    {
        l++;
    }
    printf("Length of the string:> %d",l);
}