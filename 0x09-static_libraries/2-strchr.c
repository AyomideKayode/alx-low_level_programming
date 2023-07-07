#include "main.h"
/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}

	return ('\0');
}
