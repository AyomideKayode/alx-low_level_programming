#include <stdio.h>
/**
 * main - entry point
 * Description: program should print all the numbers of base 16 in lowercase
 * followed by a new line
 * only use putchar 3 times
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
