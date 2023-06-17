#include <stdio.h>
/**
 * main - entry point
 * Description: print all possible combination of two-digit numbers.
 * numbers must be seperated by commas followed by a space.
 * 01 and 10 are considered the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use the putchar function.
 * Only use putchar up to 5 times maximum.
 * Return: 0
 */
int main(void)
{
	int m, n, o;

	m = 0;

	while (m < 100)
	{
		n = m % 10; /* single */
		o = m / 10; /* double */

		if (o < n)
		{
			putchar(o + '0');
			putchar(n + '0');

			if (m < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		m++;
	}
	putchar('\n');

	return (0);
}
