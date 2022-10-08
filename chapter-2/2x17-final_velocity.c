#include <stdio.h>
/**
 * main() - Entry Point
 * Asks the user to enter the initial velocity(m/s), acceleration(m/s2) and time(s)
 * Prints final velocity(m/s), and distance(S) covered
 * Return (0) upon success
 */

int main()
{
	float u, a, t, v, s;

	printf("Please enter the initial velocity: \n");
	scanf("%f", &u);
	printf("Please enter the acceleration: \n");
	scanf("%f", &a);
	printf("Please enter the time: \n");
	scanf("%f", &t);

	v = u+a*t;
	s = u*t + 0.5*a*t*t;

	printf("Your final velocity is %0.2f m/s and the "
			"distance covered is %0.2f m\n", v, s);
	return (0);
}
