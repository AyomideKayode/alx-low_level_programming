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
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = rot_upper[s[i] - 65];
			s[i] = rot_lower[s[i] - 97];
		}
	}
	return (s);
}
