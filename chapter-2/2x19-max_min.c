#include <stdio.h>
/**
 * main() - Entry point
 * Takes 3 integers from keyboard
 * print the sum, average, product, smallest and largest of the numbers
 * Return (0) upon success
 */

int main()
{
	int num1, num2, num3;

	printf("Enter three different integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("Sum is %d\n", num1+num2+num3);
	printf("Average is %0.2f\n", (num1+num2+num3)/3.0);
	printf("Product is %d\n", num1*num2*num3);

	if ((num1>num2)&&(num2>num3))
	{
		printf("Smallest is %d\n", num3);
		printf("Largest is %d\n", num1);
	}
	if ((num3>num2)&&(num2>num1))
	{
		printf("Smallest is %d\n", num1);
		printf("Largest is %d\n", num3);
	}
	if ((num2>num3)&&(num3>num1))
	{
		printf("Smallest is %d\n", num1);
		printf("Largest is %d\n", num2);
	}
	if ((num1>num3)&&(num3>num2))
	{
		printf("Smallest is %d\n", num2);
		printf("Largest is %d\n", num1);
	}
	if ((num3>num1)&&(num1>num2))
	{
		printf("Smallest is %d\n", num2);
		printf("Largest is %d\n", num3);
	}
	if ((num2>num1)&&(num1>num3))
	{
		printf("Smallest is %d\n", num3);
		printf("Largest is %d\n", num2);
	}

	return (0);
}
