#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string to manipulate
 * Return: encoded string s
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		while (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		while (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		while (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		while (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
	}

	return (s);
}

/**
  * Descripion - another method with only the for loop
  * char *leet(char *s)
  * {
  * int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
  * int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
  * int i, j;
  * for (j = 0; s[j] != '\0'; j++)
  * {
  * for (i = 0; a[i] != '\0'; i++)
  * {
  * if (s[j] == a[i])
  * s[j] = b[i];
  * }
  * }
  * return (s);
  * }
  */
