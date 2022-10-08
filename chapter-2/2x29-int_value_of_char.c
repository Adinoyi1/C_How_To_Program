#include <stdio.h>
/**
 * main()- Entry point
 * Reads a character from keyboard and prints the integer value
 * Returns (0) upon success
 */

int main()
{
	char myChar;
	
	printf("Please input desired character: ");
	scanf("%c", &myChar);

	printf("The integer value of %c is %d\n", myChar, myChar);
	return (0);
}
