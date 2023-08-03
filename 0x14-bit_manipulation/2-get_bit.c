#include "main.h"
/**
 * get_bit - gets bit of the the index.
 * @n:  this is the bit
 * @index: the index, starting from 0 of the bit you want to get.
 *
 * Return:  value of the bit at index index or, return -1 if unsuccesful.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	else
		return ((n >> index) & 1);
}
