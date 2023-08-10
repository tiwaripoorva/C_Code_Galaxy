#include<stdio.h>
struct employee
{
    char emp_name[50];
    int emp_id;
    int doj[3];
}tcs[3] = {{"Ellon",10005,12,03,2007},{"John",10045,14,06,2002},{"Satyam",10065,17,05,2008}};

int main()
{
    int i, d[3];
	printf("\nEnter the current date (dd mm yyyy) : ");
	scanf("%d%d%d", &d[0], &d[1], &d[2]);
	printf("\nEmployees with greater than or equal to 3 years of tenure\n\n");
    for ( i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3;j++)
        {
        if (d[j] - tcs[i].doj[i] >= 3)
        printf("%s\t \tEmployee id - %d\n",tcs[i].emp_name,tcs[i].emp_id);        
    }
    
}

}