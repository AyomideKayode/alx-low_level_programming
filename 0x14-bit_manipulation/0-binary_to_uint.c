#include "main.h"
/**
  * binary_to_uint - convert binary to unsigned integers.
  * @b: binary string to be converted.
  *
  * Return: Unsigned integer.
  */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	/* Find string length */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* Iterate through the string and calculate the sum */
	i = 0;

	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			sum += (1U << len);
		i++;
		len--;
	}

	return (sum);
}
