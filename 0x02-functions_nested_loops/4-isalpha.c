#include "main.h"
/**
 * _isalpha - check if character is an alphabetic character.
 * @c: type int character
 * Returns 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c <= 90))
		return (1);
	else
		return (0);
}
