#include <stdlib.h>
#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments
 * @ac: argument counter
 * @av: argument holder (array of char)
 * Return: a pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *str;

	/* base case to handle invalid inputs */
	if (ac == 0 || av == NULL)
		return (NULL); /* no args to concatenate */

	/*calculate length of str by iterate over each arg in argv*/
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	/* allocate memory, return NULL to indicate error */
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
