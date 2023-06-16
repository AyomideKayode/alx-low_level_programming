#include <stdio.h>
/**
 * main - entry point
 * Description: program should print the lowercase alphabet in reverse
 * followed by a new line
 * putchar to be used twice
 * Return: 0
 */
int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');

	return (0);
}
