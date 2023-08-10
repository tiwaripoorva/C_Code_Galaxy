#include<stdio.h>
int lcm(int n1,int n2);
int main()
{
    int n1,n2,max;
    printf("enter two number");
    scanf("%d%d",&n1,&n2);
    if (n1>n2)
    {
       // max=n1;
       printf("%d",lcm(n1,n2));
    }
    else
    {
        printf("%d",lcm(n2,n1));
    }
}
int lcm(int a,int b)
{
    static int lcm1=1;
    if(lcm1%a==0&&lcm1%b==0)
    {
        return lcm1;
    }
    else
    {
       lcm1++;
       lcm(a,b);
    }
    //lcm(a,b);
}