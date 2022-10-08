#include <stdio.h>
/**
 * main() - Entry point
 * asks the user for inputs and prints the sum, product, difference, quotient and remainder
 * Return (0) upon success
 */

int main()
{
	int firstNumber, secondNumber;
	
	puts("Please enter two numbers.");
	scanf("%d\n%d", &firstNumber, &secondNumber);

	printf("Sum: %d\n", firstNumber+secondNumber);
	printf("Product: %d\n", firstNumber*secondNumber);
	printf("Difference: %d\n", firstNumber-secondNumber);
	printf("Quotient: %d\n", firstNumber/secondNumber);
	printf("Remainder: %d\n", firstNumber%secondNumber);

	return (0);
}
