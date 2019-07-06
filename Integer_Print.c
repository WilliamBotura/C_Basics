#include <stdio.h>

//Using %d to control a integer in the printf function
int printInteger(void) 
{
	//C undestends the %d as a parameter that will be stated after the string
	int one = 5;
	int two = 6;
	printf("%d * %d = %d", one, two, one * two);
	return 0;
}

int Balance(void) 
{
	int balance = 50;

	//-40
	balance = balance - 40;
	printf("your balance is %d dollars\n", balance);
	//+60
	balance = balance + 60;
	printf("your balance is %d dollars\n", balance);
	//-30
	balance = balance-30;
	printf("your balance is %d dollars\n", balance);
}