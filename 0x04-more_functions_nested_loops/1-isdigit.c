#include "holberton.h"
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: digit
 * Return: return 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)

		return (1);

	return (0);
}
