#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: char separator string to be printed in between the strings.
 * @n: number of parameters/strings passed in to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
			string = "(nil)";

		if (i != n - 1)
		{
			if (separator == NULL)
				printf("%s", string);
			else
				printf("%s%s", string, separator);
		}
		else
			printf("%s\n", string);
	}
	va_end(list);
}
