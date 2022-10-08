#include <stdio.h>
/**
 * main()- Entry point
 * Read two integers and determine if the first is a multiple of the second
 * Returns (0) upon success
 */

int main()
{
	int num1, num2;
	 printf("Enter two numbers seperated by a space: ");
	 scanf("%d%d", &num1, &num2);

	 if (num1%num2 == 0)
		 printf("%d is a multiple of %d\n", num2, num1);
	 if (num1%num2 != 0)
		 printf("%d is not a multiple of %d\n", num2, num1);
	 return (0);
}
