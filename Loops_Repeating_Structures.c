#include <stdio.h>

//Using repeating structures for the first time in C

//FOR
//int main(void) 
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("First time usign for in C!\n");
//	}
//	return 0;
//	//the FOR structure in C is the same structure used in C#
//}

//More then one FOR:

int main(void) 
{
	for (int i = 0; i < 4; i++)
	{
		printf("1,");
		printf("2,");
		printf("3 ");
	}
	printf("\n");
	for (int i = 0; i < 6; i++)
	{
		printf("4,");
		printf("5 ");
	}
	return 0;
}