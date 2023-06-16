#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints the alphabet in lowercase,
 * followed by a new line
 * use putchar only twice
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
