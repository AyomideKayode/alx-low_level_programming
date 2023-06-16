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
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		i++
	}
	putchar('\n');

	return (0);
}
