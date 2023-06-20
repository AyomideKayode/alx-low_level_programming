#include "main.h"
/**
 * print_alphabet - write a program that print alphabet
 * in lowercase using only `_putchar`
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
