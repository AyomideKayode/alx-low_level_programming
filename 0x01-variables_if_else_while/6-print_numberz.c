#include <stdio.h>
/**
 * main - entry point
 * Description: program should print all single digit numbers of base 10
 * starting from 0, followed by a new line
 * forbidden to use any char variable
 * only use putchar twice
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');

	return (0);
}
