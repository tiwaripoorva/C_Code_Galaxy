#include<stdio.h>
struct bank_customer
{
    char customer_name[50];
    int acc_no;
    float balance;
}b_customer[200] = {{"Poorva Tiwari",453668872,5460.50},{"Ayushi Kubde",345672888,50.67},{"Shubham Thakur",4327788999,4567.82}};
void display(){
    printf("Customers below 100 rupees balance are\n");
    for (int i = 1; i < 3; i++)
    {
        if (b_customer[i].balance<=100)
        {
           printf("\nCustomer name is:> %s",b_customer[i].customer_name);
           printf("\nAccount numner of customer is:> %d",b_customer[i].acc_no); 
           printf("\n------------------------------------");
        }
        
    }
    
}
void rem_bal(int accnum, float amount, int code)
{
	int i;
	for (i = 0; i < 200; i++)
		if (b_customer[i].acc_no == accnum)
			break;
	if (!code)
	{
		if (b_customer[i].balance - amount < 100)
		{
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else
		{
			b_customer[i].balance -= amount;
			printf("\nYour new account balance is : %f", b_customer[i].balance);
		}
	}
	else
	{
		b_customer[i].balance += amount;
		printf("\nYour new account balance is : %f", b_customer[i].balance);
	}

}
int main(){
    int acc_num,code;
    float amount;
    display();
    printf("\nEnter the account number to debit money:>");
    scanf("%d",acc_num);
    printf("Enter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code)
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%f", &amount);
	}
	else
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%f", &amount);
	}
    rem_bal(acc_num,amount,code);
}