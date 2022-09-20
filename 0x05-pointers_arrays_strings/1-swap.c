#include "main.h"

/**
 * swap_int - swaps two intergers values
 * @a: first interger
 * @b: second interger
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
