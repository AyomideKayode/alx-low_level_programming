#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: A pointer to the matched byte if a set is matched.
 * If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++) /* iterate through target */
		{
			if (*s == accept[k]) /* return at first match */
				return (s);
		}

		s++;
	}
	return ('\0');
}
