#include<stdio.h>
int main(){
    int a = 10;
    float p = 12.2;
    char ch = 'd';
    int *ap;
    ap = &a;
    float *fp;
    fp = &p;
    char *cp; 
    cp = &ch;
    printf("\n-------------------------");
    printf("\nValue of a = %d",a);
    printf("\nValue of p = %f",p);
    printf("\nValue of ch = %c",ch);
    printf("\n-------------------------");
    printf("\nFinding address using address operator");
    printf("\n-------------------------");
    printf("\nAddress of a = %u",ap);
    printf("\nAddress of p = %u",fp);
    printf("\nAddress of ch = %u",cp);
    printf("\n-------------------------");
    printf("\nAddress of a = %u",&a);
    printf("\nAddress of p = %u",&p);
    printf("\nAddress of ch = %u",&ch);
    printf("\n-------------------------");
    printf("\nvalue of a = %u",*(&ap));
    printf("\nvalue of p = %u",*(&fp));
    printf("\nvalue of ch = %u",*(&cp));
    printf("\nFinding value using value at address operator");
    printf("\n-------------------------");
    printf("\nValue of a = %u",*ap);
    printf("\nValue of p = %u",*fp);
    printf("\nvalue of ch = %u",*cp);
    printf("\n-------------------------");
}