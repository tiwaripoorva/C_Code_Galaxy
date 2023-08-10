#include<stdio.h>
int main() {
    int id;
    printf("Enter the identity number");
    scanf("%d",&id);
    switch (id) {
        case 1:
        printf("Software Engeneering Department");
        break;
        case 2:
        printf("Civil Engeneering Department");
        break;
        case 3:
        printf("Mechanical Engeneering Department");
        break;
        case 4:
        printf("Agricultural Department");
        break;
        case 5:
        printf("Banking Department");
        break;
        default:
        printf("not any department registered");
    }
}