#include "3-calc.h"

/**
 * op_add - calculates the sum of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);

}
/**
 * op_sub - calculates the difference of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return ( a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return ( a % b);
}
