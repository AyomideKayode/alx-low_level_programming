#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: integer length
 */

int _strlen_recursion(char *s)
{
	/* starting with if not equal to, no time. lol */
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
