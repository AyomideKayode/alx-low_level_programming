#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, excluding 2 and 4.
 * Description: use '_putchar' only twice
 */
void print_most_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		if (k != 2 && k != 4)
			_putchar(k + '0');
	}
	_putchar('\n');
}
