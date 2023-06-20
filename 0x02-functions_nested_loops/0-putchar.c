#include "main.h"
/**
 * main - Entry point
 * Description: program that prints _putchar, followed by a new line.
 * program should return 0
 * Return: 0
 */
int main(void)
{
	char put[10] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(put[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
