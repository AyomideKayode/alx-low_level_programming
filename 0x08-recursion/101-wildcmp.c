#include "main.h"
/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contains a * as a special character.
 * Description: s2 can contain the special character `*`
 * The special char * can replace any string (including an empty string)
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	/* multiple base cases */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0); /* indicates no match */

	if (*s1 == '\0' && *s2 == '\0')
		return (1); /* indicates a match */

	/* if s1 and s2 are equal, recursively call wildcmp */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
