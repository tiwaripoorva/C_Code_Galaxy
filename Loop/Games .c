#include<stdio.h>
void snake();
void set();
void food();
int x{100}[4]=
{
    {100,100,110,110}
    {90,100,100,110}
    {80,100,90,110}
};
int c;
int r1,r2;
void main()
{
    int a,b;
    a = DETECT;
    r1 = randome(500)+50;
    r2 = randome(400)+50;
    intgraph(&a,&b," ");
}
while (c!=97)
{
    snake();
}
void snake()
{
    while(kbhit()==0)
    {
        food();
        int i;
        for(i=0;i<n;i++)
        {
            rectangle{x[i][0],x[i][1],x[i][2],x[i][3]};
        }
        if (c==77)
        {
            set()
            x[0][0] = x[0][0]+10;
            x[0][2] = x[0][2]+10;
        }
        if (c==75)
        {
            set();
            x[0][0]=x[0][0]+10
            x[0][0]=x[0][2]-10;
        }
        if (c==72)
        {
            set()
            x[0][1]=x[0][1]-10;
            x[0][3]=x[0][3]+10;
        }
    if (x[0][0]==r1&&x[0][1]=r2)
    {
        n++;
        r1=randome(500)+50;
        r2=randome(400)+50;
    }
    delay (100);
    }
    return 0;
}