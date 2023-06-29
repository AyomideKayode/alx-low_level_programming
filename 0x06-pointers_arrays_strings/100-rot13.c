#include "main.h"
/**
 * rot13 - rotate characters 13 places in the alphabet
 * @str: string
 * Return: string `str` rotated
 */
char *rot13(char *str)
{
	int i, j;

	char rot_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_lower[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (rot_upper[j] != '\0')
		{
			if (str[i] == rot_upper[j])
			{
				str[i] = rot_lower[j];
				break;
			}
			j++;
		}
	}
	return (str);
}
