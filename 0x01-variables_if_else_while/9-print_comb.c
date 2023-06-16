#include <stdio.h>
/**
 * main - entry point
 * Description: program should print all possible combination
 * of single digit numbers.
 * Numbers must be seperated by commas and space.
 * Only use putchar, 4 times maximum
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');

	return (0);
}
