#include<stdio.h>
struct address
{
    char colony[50];
    char city[50];
    int pin;
};
    struct employe
    {
       char name[50];
       struct address detail;
    }e[2] = {{"Amit","Lotus City","Indore",453111},{"Naina","Utkarsh Colony","Indore",456321}};
int main(){
    printf("\n%s\t%s\t%s\t%d\n",e.name, e.detail.colony, e.detail.city, e.detail.pin);
}