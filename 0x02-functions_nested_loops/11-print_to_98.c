#include <stdio.h>

/**
 * print to 98 - Prints all natural numbers from input o 98,
 * 	in order seperated by a comma follwed by a space.
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
