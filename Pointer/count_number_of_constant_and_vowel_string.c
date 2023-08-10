#include<stdio.h>
int main(){
    char check[50];
    char *p;
    int cos=0,vow=0;
    printf("Enter the characters in string\n");
    gets(check);
    puts("The string is :> \n");
    puts(check);
    p = check;
    while (*p!='\0')
    {
        if ((*p =='a'||*p =='e'||*p =='i'||*p =='o'||*p =='u'||*p =='A'||*p =='E'||*p =='I'||*p =='O'||*p =='U'))
        {
            vow++;
        }
        else
        {
            cos++;
        }
        p++;
    }
    printf("Number of consonent and vowels in the sting are %d and %d respectively\n",cos,vow);
}