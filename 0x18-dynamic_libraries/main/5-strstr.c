#include "main.h"
/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * terminating null bytes(\0) are not compared
 * Return: pointer to begnning of located substring if found. Else, NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* iterate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			} /* if matched throughout, return haystack */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return ('\0'); /* No match */
}
