#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0, i;

	/* validate list and initialize */
	if (n == 0)
		return (0);
	va_start(list, n);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
