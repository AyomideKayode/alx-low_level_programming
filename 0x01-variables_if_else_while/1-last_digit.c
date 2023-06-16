#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: program will assign a random number to the variable n
 * each time it is executed
 * variable n will store a different value every time you run this program
 * print the last digit of the number stored in the variable n
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n",
		       n, m);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       n, m);

	return (0);
}
