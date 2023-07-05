#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: pointer
 */

void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
	}
}
