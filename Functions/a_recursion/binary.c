#include<stdio.h>
int binary(int num)
{
    static int number=0;
    int temp[num];
    // int uni=number;
    int argo;
    if(number<=num)
    {
        argo=num%2;
        
        temp[number]=argo;
        num=num/2;
       printf("%d\n",temp[number]);
        number++;
    binary(num);
    if(number>=0)
    {
        printf("%d\n",temp[number]);
    }
    } 
    
    return 0;
}


int main()
{
    int temp1=
    binary(12);
    return 0;
}