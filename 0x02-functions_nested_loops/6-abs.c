#include "main.h"
#include <stdio.h>

/**
 * _abc - function that computes the absolutes value of an interger
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else 
		return (c * -1);
}
