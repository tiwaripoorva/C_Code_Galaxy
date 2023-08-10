#include<stdio.h>
#include<string.h>
int main(){
   char sep[40];
   puts("Enter the characters:> \n");
   gets(sep);
   strrev(sep);
   puts(sep);
   for (int i = 0; i < strlen(sep); i++)
   {
    printf("%c\t\t",sep[i]);
   }
}