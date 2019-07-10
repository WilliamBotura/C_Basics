#include <stdio.h>

int CollectExercise(void) 
{
	//variables
	int milesWalked = 0;
	int itensCollected = 0;

	//for every mile I walk, I collect 4 itens
	for (int i = 0; i < 10; i++)
	{
		milesWalked++;
		itensCollected = itensCollected + 4;
		printf("at %d miles, i've collected %d itens \n", milesWalked, itensCollected);
	}
	return 0;
}

//resolution "math"

//int PowarBasis(void) 
//{
//	int base = 2;
//	int result = 0;
//	int factor = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		result = factor * base;
//		printf("your texture resolution is a square of %dx%d\n", result, result);
//		factor = factor + 2;
//	}
//	return 0;
//}