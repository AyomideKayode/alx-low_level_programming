#include "main.h"
/**
 * more_numbers - print ten times the numbers, from 0 to 14
 * Description: use '_putchar' only three times
 */
void more_numbers(void)
{
	int k, a;

	for (k = 0; k < 10; k++)
	{
		a = 0;

		while (a < 15)
		{
			if (a > 9)
				_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
	}
}
