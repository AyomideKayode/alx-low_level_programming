#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers from 1 to 100, followed by a new line.
 * for multiples of three print 'Fizz' instead of number
 * and 'Buzz' for multiples of five instead of number
 * for numbers which are multiples of three and five print 'FizzBuzz'
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 15 == 0)
			printf("FizzBuzz");
		else if (k % 3 == 0)
			printf("Fizz");
		else if (k % 5 == 0)
			printf("Buzz");
		else
			printf("%d", k);

		if (k < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
