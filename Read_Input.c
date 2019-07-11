#include <stdio.h>


//Use of scanf_s()
int ReadInput(void) 
{
	//variables
	int a, b, soma;

	//the Scanf() function has a porpouse of reading the user input, and storing the value in a variable
	printf("digite o primeiro numero: \n");
	scanf_s("%d", &a);
	printf("digite o segundo numero: \n");
	scanf_s("%d", &b);
	
	soma = a + b;

	printf("a soma de a + b e: %d\n", soma);
	return 0;
}

//Use of multiple Scanf_s()'s

int MultipleScan(void) 
{
	int one, two, three, four;

	printf("Enter 4 numbers, separeted by commas: ");
	scanf_s("%d,%d,%d,%d", &one, &two, &three, &four);

	printf("first: %d, second: %d, third: %d, fourth: %d\n", one, two, three, four);

	return 0;
}

//Scanf_s() inside loop events

int ScanOnLoop(void) 
{
	int how = 0;
	int number = 0;
	int sum = 0;

	printf("insert how many times do you want to loop this program: ");
	scanf_s("%d", &how);

	for (int i = 0; i < how; i++)
	{
		scanf_s("%d", &number);
		printf("you just added %d to the list\n", number);
		sum = sum + number;
		printf("the total sum is: %d\n", sum);
	}

	return 0;
}

//robot exercise

int RobotPowerCalculator(void) 
{
	//variables
	int enginePower, resistance, weight, height, robotNumber, power;
	int powerSum = 0;

	//asks how many times the loop will be executed
	printf("Insert how many robots you want to sum the power: ");
	scanf_s("%d", &robotNumber);

	//loop
	for (int i = 0; i < robotNumber; i++)
	{
		scanf_s("%d%d%d%d\n", &height, &weight, &enginePower, &resistance);
		//makes the operation for each robot, based on the inputs given in the previous line
		power = (enginePower + resistance) * (weight - height);
		//calculate the sum of all the robots power.
		powerSum = powerSum + power;
	}

	//printts the sum
	printf("The output power of your robots combined is: %d \n", powerSum);

	return 0;
}