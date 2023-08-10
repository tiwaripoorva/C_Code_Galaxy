A#include<stdio.h>
int main() {
    int amount,note2000,note500,note200,note100,note50,note10;
    printf("Enter amount");
    scanf("%d",&amount);
    note2000=0,note500=0,note200=0,note100=0,note50=0,note10=0;
    if (amount>=note2000)
    {
        note2000=amount/2000;
        amount -= note2000*2000;
    }
    if (amount>=note500)
    {
        note500=amount/500;
        amount -= note500*500;
    }
     if (amount>=note200) {
        note200=amount/200;
        amount -= note200*200;
    }
     if(amount>=note100) {
        note100=amount/100;
        amount -= note100*100;
    }
     if (amount>=note50)
    {
        note50=amount/50;
        amount -= note50*50;
    }
     if (amount>=note10)
    {
        note10=amount/10;
        amount -= note10*10;
    }
    
    printf("total no of notes of 2000 = %d\n",note2000);
    printf("total no of notes of 500 = %d\n",note500);
    printf("total no of notes of 200 = %d\n",note200);
    printf("total no of notes of 100 = %d\n",note100);
    printf("total no of notes of 50 = %d\n",note50);
    printf("total no of notes of 10 = %d\n",note10);
    return 0;
}