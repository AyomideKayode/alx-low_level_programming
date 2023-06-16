#include <stdio.h>
/**
 * main - Entry point
 * Description: program would print all alphabets of the letter in lowercase
 * except q and e
 * only use putchar function
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++
	}
	putchar('\n');

	return (0);
}
