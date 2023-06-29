#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */
char *cap_string(char *str)
{
	int i, c;
	int caps;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, caps = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			caps = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				caps = 1;
		}

		if (caps)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				caps = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				caps = 0;
			else if (str[i] > 47 && str[i] < 58)
				caps = 0;
		}
	}
	return (str);
}
