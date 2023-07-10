#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: On success, the _strdup function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int length, i;
	char *str_dup;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	str_dup = malloc(length * sizeof(char) + 1);
	if (str_dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		str_dup[i] = str[i];
	}

	str_dup[i] = '\0';

	return (str_dup);
}
