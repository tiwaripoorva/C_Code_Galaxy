/* string is a derived data type which store single charcter or
 group of charcter and also called charcter array .


 decleartion of string:-


 char variable[size of string];

char name[6];
0,1,2,3,4,5

 indexin of string :-


 string indexing is start from 0 and last index  is :- n-1 & already terminatedm last 
 index with "\0".

0,1,2,3,*/

// name and last name entered as a char 
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    char last[50];
    /*printf("Enter the name");
    scanf("%s",name);
    printf("Enter the last:- ");
    scanf("%s",last);
    printf("%s\n",name);
    printf("%s\n",last);*/
    // string  function 
    puts("Name:- ");// for output
    gets(name);// for entering    // yash
    gets(last);//khare
    puts(name);//yash
    puts(last);//khare
    strcat(name,last);// for adding two string .yash+khare=name=yashkhare
    puts (name);//yashkhare
    strcat(last,name);
    puts(last);
    puts(last);
    strupr(last);
    puts(last);
    strlwr(last);
    puts(last);
    strupr(name);
    puts(name);
    strlwr(name);
    puts(name);
    strrev(last);
    puts(last);
    int l=strlen(last);
    printf("\n%d",l);
    return 0;
}