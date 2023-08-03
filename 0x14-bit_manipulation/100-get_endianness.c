#include "main.h"
/**
 * get_endianness - check endianness.
 *
 * Return: 0 if big endian, or 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;

	/**
	  * use a pointer to a char to examine the first byte
	  * of the memory representation of num.
	  * This is achieved by casting the address of num
	  * to a char pointer and then dereferencing it.
	  */

	if (*(char *)&num == 1)
		return (1); /* 1 to indicate little-endian */
	else
		return (0); /* 0 to indicate big-endian */
}
