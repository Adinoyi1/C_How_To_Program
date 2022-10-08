#include <stdio.h>
/**
 * main() - Entry point
 * Reads three integer from keyboard
 * Determines the largest and smallest from the group
 * Return (0) upon success
 */

int main()
{
	int num1, num2, num3;

	printf("Please enter 3 different integers seperated by space: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if((num1>num2)&&(num2>num3))
		printf("Largest is %d and smallest is %d\n", num1, num3);
	if((num3>num2)&&(num2>num1))
		printf("Largest is %d and smallest is %d\n", num3, num1);
	if((num1>num3)&&(num3>num2))
		printf("Largest is %d and smallest is %d\n", num1, num2);
	if((num2>num3)&&(num3>num1))
		printf("Largest is %d and smallest is %d\n", num2, num1);
	if((num2>num1)&&(num1>num3))
		printf("Largest is %d and smallest is %d\n", num2, num3);
	if((num3>num1)&&(num1>num2))
		printf("Largest is %d and smallest is %d\n", num3, num2);
	return (0);
}
