#include "main.h"
/**
 * main - Entry point
 * Description: program that prints _putchar, followed by a new line.
 * program should return 0
 * Return: 0
 */
int main(void)
{
	char k[8] =  "_putchar";

	int i = 0;

	while (i <= 7)
	{
		_putchar(k[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
