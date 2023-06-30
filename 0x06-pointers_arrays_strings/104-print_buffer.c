#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int byte, hex;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (hex = 0; hex < 10; hex++)
		{
			if ((hex + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + hex + byte));
			if ((hex % 2) != 0 && hex != 0)
				printf(" ");
		}
		for (hex = 0; hex < 10; hex++)
		{
			if ((hex + byte) >= size)
				break;
			else if (*(b + hex + byte) >= 31 &&
				 *(b + hex + byte) <= 126)
				printf("%c", *(b + hex + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
