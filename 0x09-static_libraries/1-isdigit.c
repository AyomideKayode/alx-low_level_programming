#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: int type parameter
 * Return: 1 if c is digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
