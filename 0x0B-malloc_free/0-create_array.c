#include "main.h"
#include <stdlib.h>
/**
  * create_array - create array of chars and initialize with a specific char
  * @size: size of array
  * @c: specific char to fill array values with
  * Return: char pointer to malloc created memory address or NULL if error
  */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *arr;

	if (size == 0) /* validate size input */
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size); /* memory allocation */

	if (arr == NULL) /* validate memory */
		return (NULL);

	for (n = 0; n < size; n++) /* set array values to char c */
		arr[n] = c;

	return (arr);
}
