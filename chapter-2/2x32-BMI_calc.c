#include <stdio.h>
/**
 * main()- Entry point
 * Reads user weight in pounds or kg and heights in inches or meters
 * Calculates and Prints out Body Mass Index (BMI)
 * Prints extra info from Department of Health
 */

int main()
{
	int choice;
	float weight, height, BMI;

	printf("Press 1 to input weight in pounds and height in inches\n"
			"Press 2 to input weight in kilograms and height in meters: ");
	scanf("%d", &choice);
	printf("Enter your weight: ");
	scanf("%f", &weight);
	printf("Enter your height: ");
	scanf("%f", &height);
	if (choice == 1)
		BMI = (weight*703)/(height*height);
	if (choice == 2)
		BMI = weight/(height*height);
	printf("Your Body Mass Index is %0.1f\n", BMI);
	printf("BMI VALUES\nUnderweight:\tless than 18.5\nNormal:\tbetween 18.5 and 24.9\n"
			"Overweight:\tbetween 25 and 29.9\nObese:\t30 or greater");
	return (0);
}
