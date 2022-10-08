#include <stdio.h>
/**
 * main() - Entry point
 * Ask users to input highest amount of rainfall in the current year and the previous year
 * compare the values entered and print an appropriate message
 */

int main()
{
	float previous, current;

	printf("Please enter the highest amount of rainfall in "
			"your country last year\n");
	scanf("%f", &previous);
	printf("Please enter the highest amount of rainfall in "
			"your country this year\n");
	scanf("%f", &current);

	if (current>previous)
		printf("The highest rainfall ever is %0.2f mm.\n", current);
	if (current<previous)
		printf("The highest rainfall ever is %0.2f mm.\n", previous);
	if (current == previous)
		printf("Rainfall of %0.2f mm in both years.\n", current);

	return (0);
}
