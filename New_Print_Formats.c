#include <stdio.h>

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