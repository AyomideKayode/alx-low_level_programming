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
	char k = 'a';

	while (k <= 'z')
	{
		if (k != 'e' && k != 'q')
			putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
