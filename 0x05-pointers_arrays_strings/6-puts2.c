#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: The string to print
 * Description: prints 1st char, then 3rd, then 5th, etc
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
