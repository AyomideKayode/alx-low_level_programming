#include "main.h"
/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string that contains the array elements
 * Return: c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	/* check if char is within range of lowercase letters */
		if (c[i] > 96 && c[i] < 123)
		{
	/* subtract 32 from each to get uppercase based on ASCII values */
			c[i] -= 32;
		}
	}
	return (c);
}
