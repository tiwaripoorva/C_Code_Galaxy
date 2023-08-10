#include<stdio.h>

int main()
{
    int time,am,pm;
    printf("enter the time::>>::");
    scanf("%d",&time);

    switch (time>=12&&time<=24)
    {
    case 1:
    printf("%d pm",time);
        break;
    case 0:
    printf("%d am",time);
    break;
    default:
    printf("unvalid number");
        break;
    }
    return 0;
}