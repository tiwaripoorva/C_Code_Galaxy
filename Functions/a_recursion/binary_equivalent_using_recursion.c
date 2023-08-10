// C/C++ program for decimal to binary
// conversion using recursion
#include <stdio.h>

// Decimal to binary conversion
// using recursion
int find(int decimal_number)
{
	if (decimal_number == 0)
		return 0;
	else
		return (decimal_number % 2 + 10*find(decimal_number / 2));

        // 12%2=0  + 10*(12/2)+10*(6/2)+10*
        //60%2=0+10*30=300
        //300
}
// Driver code
int main()
{
	int decimal_number = 12;
	printf("%d", find(decimal_number));
	return 0;
}