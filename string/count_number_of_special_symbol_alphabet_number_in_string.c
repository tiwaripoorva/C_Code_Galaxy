#include<stdio.h>
int main(){
    char check[50];
    int alph = 0,num = 0,spcl = 0,i=0;
    puts("Enter characters in string:> ");
    gets(check);
    while(check[i]!='\0')
    {
        if ((check[i]>='a'&&check[i]<='z')||(check[i]>='A'&&check[i]<='Z'))
        {
           alph++; 
        }
        else if (check[i]>='0'&&check[i]<='9')
        {
            num++;
        }
        else
        {
            spcl++;
        }
        i++;
    }
    printf("Number of alphabets :> %d\n",alph);
    printf("Number of digits :> %d\n",num);
    printf("Number of special symbols :> %d\n",spcl);
}