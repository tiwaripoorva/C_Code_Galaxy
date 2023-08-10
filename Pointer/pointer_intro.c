#include<stdio.h>
int main() {
    int a = 10;
    int *p;
    p = &a;
    printf("\nvalue of a: %d",a);
    printf("\naddress of a = %u",&a);
    printf("\naddress of pointer = %u",&p);
    printf("\nvalue of a = %d",*p);
    printf("\naddress of a = %u",*(&a));
    printf("\naddress of a = %u",p);
}