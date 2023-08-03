#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int printStart, i;
	unsigned long int x;

	printStart = 0;
	for (i = 63; i >= 0; i--)
	{
		x = (n >> i) & 1;
		if (x == 1)
			printStart = 1;
		if (printStart == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
