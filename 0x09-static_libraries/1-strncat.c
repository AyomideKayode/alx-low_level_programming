#include "main.h"
/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be concatenated to
 * @src: string to concatenate
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* i is the index of null terminator */
	while (dest[i] != '\0')
		i++;

	/* concatenate replacing null terminator */
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
