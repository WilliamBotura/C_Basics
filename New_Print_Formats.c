#include <stdio.h>
#include <string.h>

int PrintChar(void) 
{
	//the variable char is used to store single letters, probably string is used to store strings of text
	char letter = 'v';

	/*printf("write any letter from a to z: ");
	scanf_s("%c", &letter);*/

	//the %c is used to refer to a char variable, in the same way %d is used to refer to a int varible
	printf("your letter is %c", letter);

	return 0;
}

int ReadCharUser(void) 
{
	char letter1, letter2;

	printf("insert two letters: ");
	scanf_s("%c%c", &letter1, &letter2);

	printf("the letters are: %c and %c", (char)letter1, (char)letter2);

	return 0;
}