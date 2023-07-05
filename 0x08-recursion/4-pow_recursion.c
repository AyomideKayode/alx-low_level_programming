#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Number to be raised.
 * @y: Power to raise to.
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y < 0)
		return (-1); /* error */

	else if (y == 0)
		return (1);

	x *= _pow_recursion(x, y - 1); /* raised to power of y */

	return (x);
}
