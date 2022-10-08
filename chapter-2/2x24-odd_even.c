#include <stdio.h>
/**
 * main()- Entry point
 * reads and integer and determines if it is odd or even
 * return (0) upon success
 */

int main()
{
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);
	if (num%2 == 0)
		printf("%d is an even number\n", num);
	if (num%2 != 0)
		printf("%d is an odd number\n", num);

	return (0);
}
