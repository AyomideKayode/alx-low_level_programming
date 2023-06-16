#include <stdio.h>
/**
 * main - Entry point
 * Description: program should print all single digit of numbers from base 10
 * starting from zero, followed by a new line
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		printf("%i", k);
	}
	putchar('\n');

	return (0);
}
