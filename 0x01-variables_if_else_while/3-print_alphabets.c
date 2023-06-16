#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * putchar to be used 3 times
 * Return: 0
 */
int main(void)
{
	int ch;

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
