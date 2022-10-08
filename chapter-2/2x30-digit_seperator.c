#include <stdio.h>
/**
 * main()- Entry point
 * Receives a 5 digit input from keyboard
 * Separates the input by 3 spaces and prints them out
 * Returns (0) upon success
 */

int main()
{
	int num, digit1, digit2, digit3, digit4, digit5;

	printf("Please enter a 5 digit number: ");
	scanf("%d", &num);

	digit1 = num/10000;
	digit2 = (num%10000)/1000;
	digit3 = ((num%10000)%1000)/100;
	digit4 = (((num%10000)%1000)%100)/10;
	digit5 = ((((num%10000)%1000)%100)%10);

	printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);
	return (0);
}
