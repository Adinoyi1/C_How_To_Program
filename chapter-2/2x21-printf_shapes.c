#include <stdio.h>
/**
 * main()- Entry point
 * Prints rectangle, oval, arrow and diamond using asterix
 * Only the printf function is used
 * Return (0) upon success
 */

int main()
{
	//printing Rectangle
	printf("*********\n*       *\n*       *\n*       *\n"
			"*       *\n*       *\n*       *\n"
			"*       *\n*********\n\n");
	//printing Oval
	printf("   ***\n *     *\n*       *\n*       *\n*       *\n"
			"*       *\n*       *\n *     *\n   ***\n\n");
	//printing Arrow
	printf("  *\n ***\n*****\n  *\n  *\n  *\n  *\n  *\n  *\n\n");
	//printing Diamond
	printf("    *\n   * *\n  *   *\n *     *\n*       *\n *     *\n"
			"  *   *\n   * *\n    *\n\n");

	return (0);
}
