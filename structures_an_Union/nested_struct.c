/*C program to demonstrate example of nested structure*/

#include <stdio.h>

struct student {
    char name[30];
    int rollNo;

    struct dateOfBirth {
        int dd;
        int mm;
        int yy;
    } DOB; /*created structure varoable DOB*/
};

int main()
{
    struct student std;

    printf("Enter name: ");
    gets(std.name);
    
    printf("Enter roll number: ");
    scanf("%d", &std.rollNo);
    
    printf("Enter Date of Birth [DD MM YY] format: ");
    scanf("%d%d%d", &std.DOB.dd, &std.DOB.mm, &std.DOB.yy);
    
    printf("\nName : %s \nRollNo : %d \nDate of birth : %02d/%02d/%02d\n", std.name, std.rollNo, std.DOB.dd, std.DOB.mm, std.DOB.yy);

    return 0;
}
