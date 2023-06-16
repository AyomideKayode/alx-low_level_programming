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

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("and is greater than 5");
	else if (n % 10 == 0)
		printf("and is 0");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0");

	printf("\n")

	return (0);
}
