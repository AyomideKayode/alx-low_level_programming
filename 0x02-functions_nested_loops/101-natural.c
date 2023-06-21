#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024(excluded).
 * Return: 0
 */
int main(void)
{
	int i;
	int total = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;

		i++;
	}
	printf("%d\n", total);

	return (0);
}
