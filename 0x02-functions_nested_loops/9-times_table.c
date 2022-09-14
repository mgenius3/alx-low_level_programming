#include "main.h"

/**
 * times table - print the times table 
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 1; mult <= 9; mult++)
		{	
		_putchar(',');
		_putchar(' ');

		prod = num * mult;

		if (prod <= 9)
			_putchar(' ');
		else
			_putchar((prod /10) + 'a');

		_putchar((prod % 10) + '0');
	}
	_putchar('\n');
}
}
