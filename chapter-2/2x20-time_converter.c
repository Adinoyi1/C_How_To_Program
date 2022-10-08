#include <stdio.h>
/**
 * main()- Entry point
 * Takes the current time in seconds from user
 * Converts the input to hours, minutes and seconds
 * Print the converted time to screen
 * Return (0) on success
 */

int main()
{
	int input, seconds, minutes, hours;

	printf("Please enter the time in seconds\n");
	scanf("%d", &input);
	hours = input/3600;
	minutes = (input%3600)/60;
	seconds = (input%60%60);

	printf("%02d:%02d:%02d\n", hours, minutes, seconds);
	return (0);
}
