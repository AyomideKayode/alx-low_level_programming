#include "main.h"
/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */
char *rot13(char *s)
{
	int i;
	char rot_upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot_lower[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++) /* loop through string */
	{
		/* check if within range of alphabets */
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				rot_lower[s[i] - 97] : rot_upper[s[i] - 65];
		}
	}
	return (s);
}
