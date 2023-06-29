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

	/* iterates over each character in the character array str */
	for (i = 0, caps = 0; str[i] != '\0'; i++)
	{
		/* check for 1st char in str if lowercase */
		if (str[0] > 96 && str[0] < 123)
			caps = 1;
		/* iterates over each char in the nots array */
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == str[i])
				caps = 1;
		}

		if (caps)
		{
		/* convert to upper by sub 32 ASCII value */
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				caps = 0;
			}
	/* check if char is upper, if so, leave it. */
			else if (str[i] > 64 && str[i] < 91)
				caps = 0;
	/* check if char is digit, if so, leave it. */
			else if (str[i] > 47 && str[i] < 58)
				caps = 0;
		}
	}
	return (str);
}
