#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: first string
 * @s2: second string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
/* since strings are different, return will either be positive or negative */
			return (s1[i] - s2[i]);
	}
	return (0); /* end */
}
